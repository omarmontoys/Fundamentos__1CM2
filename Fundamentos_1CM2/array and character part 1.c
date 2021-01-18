// El objetivo es imprimir las tablas de multiplicar hasta el 10 sin necesidad de ingresar algun valor
// Hecho por Omar Montoya Romero
//Fecha 11/01/2021

#include <stdio.h>

int main() {

	int i, j ;
	int arreglo[11][11];

	for(i = 0; i < 11; i++)
	for(j = 0; j < 11; j++)
	arreglo[i][j] = j * i;

	for(i = 0; i < 11; i++){

		for(j = 0; j < 11; j++)
		printf("%5d", arreglo[i][j]);
		printf("\n");

	}
	return 0;
}
