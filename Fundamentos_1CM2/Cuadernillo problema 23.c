//Imprime y eleva los elementos del arreglo A en C
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021


#include<stdio.h>
#include<stdlib.h>//rand()
#define MAX 10


void imprime(int X[]){
	int i;

	for(int i=0; i<MAX; i++){
		printf("%d ", X[i]);
	}
	printf("\n");
}
	void aleatorio(int X[]){
		int i;
		for(i=0; i<MAX; i++){
			X[i]=rand() % 100;
		}
	}
		main(){

			int A[MAX], C[MAX], i;

			printf("\nGenerando numeros aleatorios A\n");
			aleatorio(A);

			printf("\nElevando arreglo A al cubo en C \n");

			for(int i=0; i<MAX; i++){
				C[i] = A[i] * A[i] * A[i];
			}

			printf("\n El contenido del arreglo A es \n");
			imprime(A);

			printf("\nEl contenido del arreglo C es \n");
			imprime(C);
		}
