/*
Menu de maximo y minimo.
Hecho por Omar Montoya Romero
Fecha: 6/01/2021

*/

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <stdlib.h>

int main(){

	int op;
	float primero, segundo, tercero, cuarto;


	do{




		printf("\n--------------------------------------------------");
		printf("\nCalculo de mayor y menor ");
		printf("\n--------------------------------------------------");
		printf("\nComparacion de 2 numeros.............[ 1 ]");
		printf("\nComparacion de 3 numeros..........[ 2 ]");
		printf("\nComparacion de 4 numeros..............[ 3 ]");
		printf("\nSalir..............[ 4 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:

			printf("ingrese el primer numero: ");
			scanf ("%f", &primero);

			printf("\nIngrese el segundo numero: " );
			scanf ("%f", &segundo);


			if (primero > segundo)
				printf("El mayor es el %.1f", primero);
			else {
				if (segundo > primero)
					printf("El mayor es el %.1f", segundo);
				else
					printf("Los 2 son iguales "); }

			break;
		case 2:

			printf("ingrese el primer numero: ");
			scanf ("%f", &primero);

			printf("\nIngrese el segundo numero: " );
			scanf ("%f", &segundo);

			printf("\nIngrese el tercer numero: " );
			scanf ("%f", &tercero);

			if (primero > segundo && primero > tercero )
				printf("El mayor es el %.1f", primero);
			else {
				if (segundo > primero && segundo > tercero )
					printf("El mayor es el %.1f", segundo);
				else
					if (tercero > primero && tercero > segundo)
						printf("El mayor es el %.1f", tercero);
					else
						printf("Los 3 son iguales "); }

			break;
		case 3:
			printf("ingrese el primer numero: ");
			scanf ("%f", &primero);
			printf("\nIngrese el segundo numero: " );
			scanf ("%f", &segundo);
			printf("\nIngrese el tercer numero: " );
			scanf ("%f", &tercero);
			printf("\nIngrese el cuarto numero: " );
			scanf ("%f", &cuarto);

			if (primero > segundo && primero > tercero && primero > cuarto )
				printf("El mayor es el %.1f", primero);
			else {
				if (segundo > primero && segundo > tercero && segundo > cuarto )
					printf("El mayor es el %.1f", segundo);
				else
					if (tercero > primero && tercero > segundo && tercero> cuarto )
						printf("El mayor es el %.1f", tercero);
					else
						if (cuarto > primero && cuarto > segundo && cuarto> tercero )
							printf("El mayor es el %.1f", cuarto);
						else
							printf("Los 4 son iguales "); }

			break;

		case 4:
			break;
		case 5:

		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=4);

}
