// Objetivo del programa es demostrar el metodo de recursividad
#include <stdio.h>
int Fibonacci(int n);

int main() {

	int numero, i;

	printf("Escribe el numero de elementos\n");
	scanf("%i",&numero);

	for( i = 1; i <= numero; i++)
	{
		printf("%i, ", Fibonacci(i));
	}
	return 0;
}

int Fibonacci(int n){

	if (n==0 || n==1)
	{
		return n;
	}else
	{
		return (Fibonacci(n-1) + Fibonacci(n-2));
	}


}
