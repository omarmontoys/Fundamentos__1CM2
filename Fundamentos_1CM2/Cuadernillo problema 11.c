/*
Convercion de Pies.
Hecho por Omar Montoya Romero
Fecha: 6/01/2021

*/

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <stdlib.h>

int main(){

	int op;
	float pulgadas, pies, metros, centimetros;


	do{




		printf("\n--------------------------------------------------");
		printf("\nCalculo de convercion de monedas ");
		printf("\n--------------------------------------------------");
		printf("\nPies a Pulgadas.............[ 1 ]");
		printf("\nPies a Metros..........[ 2 ]");
		printf("\nPies a Centimetros..............[ 3 ]");
		printf("\nSalir..............[ 4 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			pulgadas = pies * 12;
			printf( "%.2f  pulgadas", pulgadas);

			break;
		case 2:
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			metros = pies / 3.281;
			printf( "%.2f  metros", metros);

			break;
		case 3:
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			centimetros = pies * 30.48;
			printf( "%.2f  centimetros", centimetros);

			break;

		case 4:


			break;
		case 5:

		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=4);

}
