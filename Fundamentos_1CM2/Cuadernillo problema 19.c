//Calcula la suma y promedio de n calificacione en el arrelgo
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>
#define MAX 60
main(){

	float cals[MAX];
	int n, i;
	float suma=0, promedio=0;

	printf("Cuantas calificaciones deseas ? "); scanf("%d", &n);
	if(n<=MAX){
		for(i=0; i<n; i++){
			printf("Dame calificacion %d = ", i+1);
			scanf("%f", &cals[i]);
			suma = suma + cals[i];
		}
		printf("\n");
		for(i=0; i<n; i++) printf("%.2f ", cals[i]);
		printf("\n");

		promedio = suma / n;
		printf("La suma de las calificaciones es :     %.2f\n", suma);
		printf("El promedio de las calificaciones es : %.2f\n", promedio);
	}
	else printf("El arreglo solo permite %d elementos", MAX);
}


