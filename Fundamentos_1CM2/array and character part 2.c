// El objetivo es contabilizar el numero de caracteres que tiene la palabra ingresada
// Hecho por Omar Montoya Romero
//Fecha 11/01/2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char palabra[20];
	int longitud_string;

	printf("Escribe la palabra: ");
	scanf("%s", palabra);
	printf("La palabra es: %s \n", palabra);

	longitud_string = strlen(palabra);
	printf("La palabra es: %s, tiene %i caracteres. \n",palabra, longitud_string);

	return 0;
}
