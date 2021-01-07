/*
Menu de operaciones basicas.
Hecho por Omar Montoya Romero
Fecha: 06/01/2021

*/

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <stdlib.h>
#define Max 100
int main(){

	int op,i,s;
	float suma, resta, multiplicacion;
	float arreglo[Max];

	do{




		printf("\n--------------------------------------------------");
		printf("\nCalculo de operaciones basicas ");
		printf("\n--------------------------------------------------");
		printf("\nSuma.............[ 1 ]");
		printf("\nResta..........[ 2 ]");
		printf("\nMultiplicacion..............[ 3 ]");
		printf("\nSalir..............[ 4 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:


			printf("Ingrese la cantidad de numeros que desea usar: ");
			scanf("%d", &s);

			for ( i = 0 ; i <= s; i++)
			{
				printf("Ingrese el nuemro a sumar: ");
				scanf("%d", &s);
			}
			suma = suma + Max;
			printf("%d Es el resultado",suma);
			break;
		case 2:
			printf("Ingrese la cantidad de numeros que desea usar: ");
			scanf("%d", &s);

				for ( i = 0 ; i <= s; i++)
				{
					printf("Ingrese el nuemro a sumar: ");
					scanf("%d", &s);
				}
				resta = resta - Max;
				printf("%d Es el resultado",resta);
					break;
		case 3:


			printf("Ingrese la cantidad de numeros que desea usar: ");
			scanf("%d", &s);

				for ( i = 0 ; i <= s; i++)
				{
					printf("Ingrese el nuemro a sumar: ");
					scanf("%d", &s);
				}
				multiplicacion = multiplicacion * Max;
				printf("%d Es el resultado",multiplicacion);
			break;
		case 4:

			break;

		case 5:

		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=4);

}
