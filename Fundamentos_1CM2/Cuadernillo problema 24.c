//Lea una palabra y lo escriba al revés
//Hecho por Omar Montoya Romero
//Fecha: 06/01/2021

#include <stdio.h>
int main () {
	char l, palabra[21];
	int i;
	printf("Teclee una palabra de menos de 20 letras:");
	scanf("%s", palabra);
	i = 0;
	while(palabra[i++] != '\0') ;
		  l = i-1; printf("%s tiene %d letras\n", palabra, l);
		  printf("%s escrita al revés es: ", palabra);
		  i = l;
		  while (i > 0)
			  printf("%c", palabra[--i]);
		  return 0;
}
