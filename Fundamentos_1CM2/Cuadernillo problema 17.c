//Programa que calcula estadisticas con un conjunto de numeros
//Hecho por Omar Montoya Romero
//Fecha: 6/01/2021

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 20

int menu () {
	int op;

	system ("cls");
	printf("---------------------------------------------\n");
	printf("Calculos estadisticos sobre un arreglo de numeros\n");
	printf("Leer los elementos del arreglo................[1]\n");
	printf("Mostrar los elements del arreglo..............[2]\n");
	printf("Calcular y mostrar estadisticas...............[3]\n");
	printf("Salir.........................................[4]\n");
	printf("Elije una opcion ? ");
	scanf("%d", &op);
	return op;
}

void leerarreglo(double A[],int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("Numero [%d]= ", i);
		scanf("%lf", &A[i]);
	}
}
void mostrararreglo(double A[],int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%.2lf", A[i]);
	}
}

double mayor(double A[], int n) {
	int i;
	double m;
	m = A[0];
	for(i=0;i<n;i++) {
		if(A[i] > m)
			m=A[i];
	}
	return m;
}

double menor(double A[], int n) {
	int i;
	double m;
	m=A [0];
	for(i=0;i<n;i++) {
		if(A[i] < m)
			m=A[i];
	}
	return m;
}

double media(double A[], int n) {
	int i;
	double s;
	for(i=0;i<n;i++) {
		s=s+A[i];
	}
	return s/n;
}
double varianza(double A[],double m, int n) {
	int i;
	double s=0;
	for(i=0;i<n;i++) {
		s=s+ pow(A[i]-m,2);
	}
	return s/n;
}

main() {
	int op,n=0;
	char  pausa;
	double nums[MAX];
	double may,men,med,var,des;

	do {
		op=menu();
		switch(op) {
		case 1:printf("Leyendo los elementos del arreglo\n");
		printf("Cuantos elementos ? ");scanf("%d",&n);
		leerarreglo(nums,n);
		break;
		case 2:printf("Mostrando los elementos del arrelgo\n");
		mostrararreglo(nums,n);
		break;
		case 3:printf("Calculando estadisticas en base a los numeros en el arreglo\n");
		may=mayor(nums, n);
		men=menor(nums, n);
		med=media(nums, n);
		var=varianza(nums, med, n);
		des=sqrt(var);
		printf("El elemento mayor es                       %lf\n", may);
		printf("El elemento menor del arreglo es           %lf\n", men);
		printf("La media de los elementos en el arreglo es %.2lf", med);
		printf("La varianza es                             %.2lf", var);
		printf("La desviacion estandar es                  %.2lf", des);
		break;
		case 4:printf("\nGracias por utilizar nuestro sistema \n"); break;
		default:
			printf("Elegiste una opcion invalida\n");
		}
		printf("\nPresiona una <Enter> para continuar... \n");fflush(stdin);scanf("c", &pausa);
	} while(op!=4);
	printf("\n\nEso es todo por el semestre, te deseamos mucha suerte \n\n");


}

