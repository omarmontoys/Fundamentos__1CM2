//Convercion de pulgadas.
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021
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
		printf("\nPulgadas a Pies.............[ 1 ]");
		printf("\nPulgadas a Metros..........[ 2 ]");
		printf("\nPulgadas a Centimetros..............[ 3 ]");
		printf("\nSalir..............[ 4 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:
			printf("\nLeyendo Pulgadas");
			printf("\nIngrese Pulgadas que desea procesar:  ");
			scanf("%f", &pulgadas);
			pies = pulgadas / 12;
			printf( "%.2f  pies", pies);

			break;
		case 2:
			printf("\nLeyendo Pulgadas");
			printf("\nIngrese Pulgadas que desea procesar:  ");
			scanf("%f", &pulgadas);
			metros = pulgadas / 39.37;
			printf( "%.2f  metros", metros);

			break;
		case 3:
			printf("\nLeyendo Pulgadas");
			printf("\nIngrese Pulgadas que desea procesar:  ");
			scanf("%f", &pulgadas);
			centimetros = pulgadas * 2.54;
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
