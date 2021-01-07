//Busca un elemento en un arreglo introducido por el usuario
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021


#include<stdio.h>
#define MAX 20

main() {
	int op;
	int nums[MAX], n=0,i,b,pos;


	do {
		printf("[1] Leer elementos del arreglo\n");
		printf("[2] Mostrar elementos del arreglo\n");
		printf("[3] Buscar elementos del arreglo\n");
		printf("[4] Salir\n");
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
				pos=1;
				printf("Dame el elemento a buscar\n");scanf("%d",&b);
				for(i=0;i<n;i++) {
					if(nums[i]==b) pos=i;
				}
				if(pos!=-1) printf("Encontrado en la posicion %d\n", pos);
				else printf("No lo encontre\n");
			}else printf("El arreglo no tiene elementos\n");
			break;
		case 4: printf("Gracias hatsa la proxima\n");break;
		default: printf("Opcion incorrecta\n");
		}
	}while (op!=4);



}
