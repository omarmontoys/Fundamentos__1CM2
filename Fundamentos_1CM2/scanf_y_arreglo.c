#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void llenar (double a[]){
int i =0;
 for(i = 0; i < 2;i++){
    printf("numero [%d] = ",i);
    scanf("%lf", &a[i]);

 }
}
int main() {

	double arreglo[MAX];
	int i = 0, n;
    arreglo[0];
    arreglo[1];
	printf("\n Digite la candidad espacios necesita: ");
	scanf("%d",&n);
    llenar(arreglo);

	for ( i = 0 ; i < n/2; i++)
	{
		printf("%.1lf\n",arreglo[0]);
		arreglo[0] = arreglo[0] + arreglo[1];
		printf("%.1lf\n",arreglo[1]);
		arreglo[1] = arreglo[0] + arreglo[1];

	}

	return 0;
}
