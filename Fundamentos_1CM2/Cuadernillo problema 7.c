/*
Identificar el numero de mayor valor y el de minimo valor, por medio de arreglos y ciclos.
Hecho por Omar Montoya Romero
Fecha: 06/01/2021

*/
#include <stdio.h>
#define Max 100
int main (){
	float  num[Max];
	int i, n;
	float mayor, menor;
	printf("\nIngrese cuantos numeros desea comparar: ");
	scanf("%d", &n);


	for(i = 0; i < n; i++ ){
		printf("\nIngrese el numero a analizar: ");
		scanf("%f", &num[i]);
	}
	mayor = num[0];
	menor = mayor;

	for(i = 1; i < n; i++ ){
		if(num[i] > mayor ){
			mayor = num[i];
		}
		if(num[i] < menor ){
			menor = num[i];
		}

	}
	printf("\nEl numero mayor es %f", mayor);
	printf("\nEl numero menor es %f", menor);

	return 0;
}
