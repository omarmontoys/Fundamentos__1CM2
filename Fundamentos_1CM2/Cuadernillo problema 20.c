//Busca un elemento
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>
#define Max 100
main(){


	float temps[Max];

	int i,p,s,n;
	float suma=0;
	s = 1;
	printf("¡Cuantos temperaturas quieres sumar?");
	scanf("%d",&p);
	printf("Ingrese las temperaturas a sumar");
	for (i = 0 ; i < p ;i++){
		temps[Max] = n;
		printf("Ingrese la temperatura numero %d:  ",s);
		scanf("%d",&n);

		//s = 1;
		s++;
	}
	printf("Las temperaturas son: \n");
	for(i=0; i<p; i++) {
		printf("%.2f \n", temps[Max]);
		suma = suma + temps[Max];
	}

	printf("\nLa suma de las temperaturas es: %.2f", suma);
}
