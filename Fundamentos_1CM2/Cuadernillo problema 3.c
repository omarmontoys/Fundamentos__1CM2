//Identificar el numero mayor de 4 numeros o si son del mismo valor
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
	float cuarto;
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

	return (EXIT_SUCCESS);
}
