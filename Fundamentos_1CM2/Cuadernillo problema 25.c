//Convertidor de moneda euro a peseta
//Hecho por Omar Montoya Romero
//Fecha 06/01/2021
#include <stdio.h>
#define euro 166.386
int main() {
	float n,x; int opcion;
	printf("la cantidad: "); scanf("%f",&n);
	printf("1-Ptas a Euros \n");
	printf("2-Euros a ptas:  ");
	scanf("%d",&opcion);

		   switch(opcion) {
		   case 1: x = n / euro;
		   printf("%f Pesetas son %f Euros",n,x); break;
		   case 2: x = n * euro;
		   printf("%f Euros son %f Pesetas",n,x); break;
		   default: printf("opción incorrecta");
	}
		   return 0;
}
