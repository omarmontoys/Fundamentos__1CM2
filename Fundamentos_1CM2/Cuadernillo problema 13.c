//Convercion de medidas.
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
		printf("\nPies a Pulgadas.............[ 4 ]");
		printf("\nPies a Metros..........[ 5 ]");
		printf("\nPies a Centimetros..............[ 6 ]");
		printf("\nMetros a Pies..............[ 7 ]");
		printf("\nMetros a Pulgadas..............[ 8 ]");
		printf("\nMetros a Centimetros..............[ 9 ]");
		printf("\nCentimetros a Pulgadas..............[ 10 ]");
		printf("\nCentimetros a Pies..............[ 11 ]");
		printf("\nCentimetros a Metros..............[ 12 ]");
		printf("\nSalir..............[ 13 ]");
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
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			pulgadas = pies * 12;
			printf( "%.2f  pulgadas", pulgadas);

			break;
		case 5:
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			metros = pies / 3.281;
			printf( "%.2f  metros", metros);


			break;
		case 6:
			printf("\nLeyendo Pies");
			printf("\nIngrese Pies que desea procesar:  ");
			scanf("%f", &pies);
			centimetros = pies * 30.48;
			printf( "%.2f  centimetros", centimetros);


			break;
		case 7:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			pies = metros * 3.281;
			printf( "%.2f  pies", pies);

			break;
		case 8:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			pulgadas = metros * 39.37;
			printf( "%.2f  pulgadas", pulgadas);

			break;
		case 9:
			printf("\nLeyendo Metros");
			printf("\nIngrese Metros que desea procesar:  ");
			scanf("%f", &metros);
			centimetros = metros * 100;
			printf( "%.2f  centimetros", centimetros)
			break;
		case 10:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			pulgadas = centimetros / 2.54;
			printf( "%.2f  pulgadas", pulgadas);


			break;
		case 11:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			pies = centimetros / 30.48;
			printf( "%.2f  pies", pies);


			break;
		case 12:
			printf("\nLeyendo Centimetros");
			printf("\nIngrese Centimetros que desea procesar:  ");
			scanf("%f", &centimetros);
			metros = centimetros / 100;
			printf( "%.2f  metros", metros);


			break;
		case 13:



			break;
		case 14:


		default: printf("\nOpcion invalida");
		break;
		}

	}while(op!=13);

}
