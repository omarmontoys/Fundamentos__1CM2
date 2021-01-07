//Imprime arreglos constantes usando funciones
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>

void imprime(int X[]){
	int i;

	for(int i=0; i<5; i++){
		printf("%d ", X[i]);
	}
}

	main(){

		int A[]={10,20,30,40,50};
		int B[]={25,35,45,55,6};

		printf("\n El contenido del arreglo A es \n");
		imprime(A);

		printf("\n El contenido del arreglo B es \n");
		imprime(B);

	}
