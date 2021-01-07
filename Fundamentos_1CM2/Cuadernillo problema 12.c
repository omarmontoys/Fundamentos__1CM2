/*
Convercion de metros y centimetros.
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
		printf("\nMetros a Pies..............[ 1 ]");
		printf("\nMetros a Pulgadas..............[ 2 ]");
		printf("\nMetros a Centimetros..............[ 3 ]");
		printf("\nCentimetros a Pulgadas..............[ 4 ]");
		printf("\nCentimetros a Pies..............[ 5 ]");
		printf("\nCentimetros a Metros..............[ 6 ]");
		printf("\nSalir..............[ 7 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			pies = metros * 3.281;
			printf( "%.2f  pies", pies);

			break;
		case 2:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			pulgadas = metros * 39.37;
			printf( "%.2f  pulgadas", pulgadas);

			break;
		case 3:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			centimetros = metros * 100;
			printf( "%.2f  centimetros", centimetros);
				break;
		case 4:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			pulgadas = centimetros / 2.54;
			printf( "%.2f  pulgadas", pulgadas);


			break;
		case 5:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			pies = centimetros / 30.48;
			printf( "%.2f  pies", pies);


			break;
		case 6:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			metros = centimetros / 100;
			printf( "%.2f  metros", metros);


			break;
		case 7:



			break;
		case 8:


		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=7);

}
