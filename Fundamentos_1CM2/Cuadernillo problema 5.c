/*
Convercion de monedas.
Hecho por Omar Montoya Romero
Fecha: 06/01/2021

*/

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <stdlib.h>

int main(){

	int op;
	float dolarestadounidense, pesos, dolarcanadiense, yenes;;


	do{




		printf("\n--------------------------------------------------");
		printf("\nCalculo de convercion de monedas ");
		printf("\n--------------------------------------------------");
		printf("\nDolar Estadounidense a Pesos.............[ 1 ]");
		printf("\nPesos a Dolar Estadounidense..........[ 2 ]");
		printf("\nDolar Estadounidense a Dolar Canadiense..............[ 3 ]");
		printf("\nDolar Canadiense a Dolar Estadounidense.............[ 4 ]");
		printf("\nDolar Canadiense a Pesos..........[ 5 ]");
		printf("\nYenes a Dolar Estadounidense..............[ 6 ]");
		printf("\nYenes a Dolar Canadiense..............[ 7 ]");
		printf("\nYenes a Pesos..............[ 8 ]");
		printf("\nSalir..............[ 9 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:
			printf("\nLeyendo Dolares Estadounidenses");
			printf("\nIngrese Dolares Estadounidenses que desea procesar:  ");
			scanf("%f", &dolarestadounidense);
			pesos = dolarestadounidense * 12.5;
			printf( "%.2f  pesos", pesos);

			break;
		case 2:
			printf("\nLeyendo Pesos");
			printf("\nIngrese los Pesos que desea procesar:  ");
			scanf("%f", &pesos);
			dolarestadounidense = pesos/12.5;
			printf( "%.2f  Dolares Estadounidenses", dolarestadounidense);

			break;
		case 3:
			printf("\nLeyendo Dolares Estadounidenses");
			printf("\nIngrese los Dolares Estadounidenses que desea procesar:  ");
			scanf("%f", &dolarestadounidense);
			dolarcanadiense = dolarestadounidense * 1.38;
			printf( "%.2f  Dolares Canadienses", dolarcanadiense);

			break;

		case 4:
			printf("\nLeyendo los Dolares Canadienses");
			printf("\nIngrese los Dolares Canadienses que desea procesar:  ");
			scanf("%f", &dolarcanadiense);
			dolarestadounidense = dolarcanadiense / 1.38;
			printf( "%.2f  Dolares Canadienses", dolarestadounidense);

			break;
		case 5:
			printf("\nLeyendo los Dolares Canadienses");
			printf("\nIngrese los Dolares Canadienses que desea procesar:  ");
			scanf("%f", &dolarcanadiense);
			pesos = dolarcanadiense * 17.25;
			printf( "%.2f  Pesos", pesos);

			break;
		case 6:
			printf("\nLeyendo los Yenes");
			printf("\nIngrese los Yenes que desea procesar:  ");
			scanf("%f", &yenes);
			dolarestadounidense = yenes/166.66;
			printf( "%.2f  Dolares Estadounidenses", dolarestadounidense);

			break;
		case 7:
			printf("\nLeyendo los Yenes");
			printf("\nIngrese los Yenes que desea procesar:  ");
			scanf("%f", &yenes);
			dolarcanadiense = yenes / 121.21 ;
			printf( "%.2f  Dolares Canadienses", dolarcanadiense);

			break;
		case 8:
			printf("\nLeyendo los Yenes");
			printf("\nIngrese los Yenes que desea procesar:  ");
			scanf("%f", &yenes);
			pesos = yenes * 75;
			printf( "%.2f  Pesos", pesos);

			break;
		case 9:

			break;
		case 10:
			break;

		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=9);

}
