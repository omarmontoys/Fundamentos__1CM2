//Identificar el numero mayor de 3 numeros o si son del mismo valor
//Hecho por Omar Montoya Romero
//Fecha 06/01/2021

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
	float tercero;
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

	return (EXIT_SUCCESS);
}
