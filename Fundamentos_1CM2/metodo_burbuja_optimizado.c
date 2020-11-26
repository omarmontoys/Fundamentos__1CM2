/*
Metodo burbuja optimizado, por medio de arreglos y ciclos.
Hecho por Omar Montoya Romero
Fecha: 24/11/2020

*/

#include <stdio.h>
#include <iostream>
#define Max 100
int main(){
	double num[Max];
	int aux,i,j;
	int n;
	printf("\nIngrese cuantos datos desea manejar: ");
	scanf("%d",&n);
	bool bandera;


	for(i = 0; i < n; i++ ){
		printf("\nIngrese los numeros a analizar: ");
		scanf("%lf", &num[i]);
	}

		for (int i = 1; i < n; i++){
			bandera = false;
			for(j = n - 1; j >= i; j--){

				if(num[j - 1] > num[j]){

				aux = num[j-1];
				num[j-1]= num[j];
				num[j] = aux;
				bandera = true;
			}
		}
		if(bandera == false)break;
	}
	printf("\n");
	for(int i = 0; i < n; i++ ){

		printf("%lf\t",num[i]);

	}
	return 0;

}

