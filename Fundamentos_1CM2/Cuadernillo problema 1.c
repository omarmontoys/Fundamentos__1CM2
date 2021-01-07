//Identificar el numero mayor de 2 numeros o si son del mismo valor
//Hecho por: Omar Montoya Romero
//Fecha: 06/01/2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float primero;
	printf("ingrese el primer numero: ");
	scanf ("%f", &primero);
	float segundo;
	printf("\nIngrese el segundo numero: " );
	scanf ("%f", &segundo);


	if (primero > segundo)
		printf("El mayor es el %.1f", primero);
	else {
		if (segundo > primero)
			printf("El mayor es el %.1f", segundo);
		else
			printf("Los 2 son iguales "); }

	return (EXIT_SUCCESS);
}
