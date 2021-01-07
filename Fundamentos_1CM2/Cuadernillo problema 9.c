//contar cuantos numeros son par y cuantos impar
//Hecho por Omar Montoya Romero
//Fecha 06/01/2021
#include <conio.h>
#include <stdio.h>

int main()
{
	int i, numero, pares, impares, g;
	printf("¡Cuantos numeros quieres ingresar?");
	scanf("%d", &g);
	pares = 0;
	impares = 0;

	for ( i = 1 ; i <= g ; i++ )
	{
		printf( "\n   Introduzca un n%cmero entero %d: ", 163, i );
		scanf( "%d", &numero );

		if ( numero % 2 == 0 )
			pares++;
		else
			impares++;
	}
	printf( "\n   Ha introducido %d n%cmeros pares y %d impares.", pares, 163, impares );
	return 0;
}
