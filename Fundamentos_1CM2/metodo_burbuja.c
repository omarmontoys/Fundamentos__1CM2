/*
Metodo burbuja , por medio de arreglos y ciclos.
Hecho por Omar Montoya Romero
Fecha: 24/11/2020

*/
#include <stdio.h>
int main(){
	int num[3] = {3,1,5};
	int aux;
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(num[j] > num[j+1]){

				aux = num[j+1];
				num[j+1]= num[j];
				num[j] = aux;
			}
		}
	}
	for(int i = 0; i < 3; i++ ){
		printf("%d\t",num[i]);
	}
	return 0;
}

