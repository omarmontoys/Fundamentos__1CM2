/*
Hacer calculos matematicos usando la libreria math.h
Hecho por Omar Montoya Romero
Fecha: 30/11/2020

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

	float res1 = 1.0;
	float res2 = 2.0;
	float res3 = 3.0;
	float res4 = 4.0;
	int res5;
	float res6 = 6.0;
	float res7 = 7.0;
	float res8 = 8.0;
	float res9 = 9.0;
	float res10 = 10.0;
	float res11 = 11.0;
	float res12 = 12.0;

	res1=sqrt((6.18/5.0)*((14.1-4)/2));
	res2 = exp((8.9*34)/17);
	res3 = log(8-7);
	res4 = log10(900);
	res5 = fabs(-17.8);
	res6 = ceil(8/7);
	res7= floor((6.18/5.0)*(((14.1-4)/2)));
	res8 = (pow((8.9*34)/17,9));
	res9 = fmod(89,796);
	res10= sin((6.18/5.0)*(((14.1-4)/2)));
	res11 = cos((8.9*34)/17);
	res12 = tan(8-7);


	printf("1.- La raiz cuadrada es:  %f\n", res1);

	printf("2.- La  funcion exponencial es: %f\n", res2);

	printf("3.- El logaritmo natural es: %f\n", res3);

	printf("4.- El logaritmo es: %f\n", res4);

	printf("5.- El valor absoluto es: %d\n", res5);

	printf("6.- El resultado del redondeo en funcion ceil es: %f\n", res6);

	printf("7.- El resultado del redondeo en funcion floor es: %f\n", res7);

	printf("8.- El resultado de elevarlo a la potencia  es: %f\n", res8);

	printf("9.- El residuo de un numero flotante es: %f\n", res9);

	printf("10.- El seno de res10 es: %f\n", res10);

	printf("11.- El coseno de res11 es: %f\n", res11);

	printf("12.- La tangente de res12 es: %f\n", res12);

	return (EXIT_SUCCESS);
}

