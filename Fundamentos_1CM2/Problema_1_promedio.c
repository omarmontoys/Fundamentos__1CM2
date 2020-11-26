/*
Calcular el promedio de cierta cantidad de notas, por medio de arreglos y ciclos.
Hecho por Omar Montoya Romero
Fecha: 24/11/2020

*/
#include <stdio.h>
#include <stdlib.h>
#define A 100
int main() {

	int i, y, numero_alumnos;
	float promedio, nota, suma;
	float tabla_alumnos[A];
	float B;
	printf("\nIngrese cuantas notas quiere promediar: ");
	scanf("%f", &B);

	i = 1;
	promedio = 0.0;

	printf("\n Introduzca la primera nota: ");
	scanf("%f", &nota);


	if (nota == -1){

		printf("\n La secuencia esta vacia\n");

	}
	else{
		while((i< B)  ){

			tabla_alumnos[A] = nota;
			printf("\nIntroduzca la nota siguiente: ");
			scanf("%f", &nota);
			promedio = promedio + tabla_alumnos[A];
			i++;

		}
		numero_alumnos = i;
		promedio = promedio / i;
		printf("\n El promedio de las notas es: %f", promedio);

	}

	return 0 ;
}


