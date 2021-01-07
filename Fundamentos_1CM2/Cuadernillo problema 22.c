//Generar de 10 numero aleatorios en A y B, luego sumarlos en C
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>
#include<stdlib.h>//rand()
#define MAX 10

//Esta funcion imprime un arreglo
void imprime(int X[]){
	int i;

	for(int i=0; i<MAX; i++){
		printf("%d ", X[i]);
	}
	printf("\n");
}
	//Esta funcion llena un arreglo de elementos aleatorios
	void aleatorio(int X[]){
		int i;
		for(i=0; i<MAX; i++){
			X[i]=rand() % 100;
		}
	}
		main(){

			int A[MAX], B[MAX], C[MAX], i;

			printf("\nGenerando numeros aleatorios entre A y B\n");
			aleatorio(A);
			aleatorio(B);

			printf("\nSumando arreglo A + B en C\n");
			for(i=0; i<MAX; i++){
				C[i] = A[i] + B[i];
			}

			printf("\nEl contenido del arreglo A es \n");
			imprime(A);

			printf("\nEl contenido del arreglo B es \n");
			imprime(B);

			printf("\nEl contenido del arreglo C es \n");
			imprime(C);

		}
