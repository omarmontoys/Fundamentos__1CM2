//Ingresa las medidas del triangulo y este te dice que tipo es
//Hecho por Omar Montoya Romero
//Fecha  06/01/2021
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a,b,c;

	if (a == b && b == c )
		printf("Es un triangulo equilatero");
	else {
		if (a >= b + c )
			printf("NO es un triangulo");
		else
			if ((pow(a,2)) = (pow(b,2)) + (pow(c,2)) )
				printf("Es un triangulo equilatero");
			else
				if ((pow(a,2)) > (pow(b,2)) + (pow(c,2)) )
					printf("Es un triangulo obtuso");
				else
					printf("El triangulo es agudo "); }

	return (EXIT_SUCCESS);
}
