//Encuentra el maximo y el minimo en los elementos de un arreglo
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>
#define MAX 20

main() {
	int op;
	int nums[MAX], n=0,i,may,men;


	do {
		printf("[1] Leer elementos del arreglo\n");
		printf("[2] Mostrar elementos del arreglo\n");
		printf("[3] Encontrar el elemento mayor\n");
		printf("[4] Encontrar el elemento menor\n");
		printf("[5] Salir\n");
		printf("Selecciona una opcion: ");scanf("%d", &op);
		switch(op) {
		case 1:
			printf("Cuantos elementos ? ");scanf("%d", &n);
			if(n<=MAX) {
				for(i=0;i<n;i++) {
					printf("nums[%d] = ", i);
					scanf("%d", &nums[i]);
				}
			}else printf("No hay capacidad \n");
			break;
		case 2:
			if(n!=0) {
				for(i=0;i<n;i++) {
					printf("nums[%d] =%d \n", i,nums[i]);
				}
			}else printf("El arreglo no tiene elementos \n");
			break;
		case 3:
			if(n!=0) {
				may=nums[0];
				for(i=0;i<n;i++) {
					if(nums[i]>may) may=nums[i];
				}
				printf("El elemento mayor es %d \n", may);
			}else printf("El arreglo no tiene elementos\n");
			break;
		case 4:if(n!=0) {
			men=nums[0];
			for(i=0;i<n;i++) {
				if(nums[i]<men) men=nums[i];
			}
			printf("El elemento menor es %d \n", men);
		}else printf("El arreglo no tiene elementos\n");
		break;
		case 5: printf("Gracias hatsa la proxima\n");break;
		default: printf("Opcion incorrecta\n");
		}
	}while (op!=5);



}
