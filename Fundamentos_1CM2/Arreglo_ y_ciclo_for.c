#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main() {

    double arreglo[MAX];
    int i = 0, s = 0;

    arreglo[0] = 2;
    arreglo[1] = 3;

    for ( i = 0 ; i < (MAX/2); i++)
        {
        printf("%.1lf\n",arreglo[0]);
        arreglo[0] = arreglo[0] + arreglo[1];
        printf("%.1lf\n",arreglo[1]);
        arreglo[1] = arreglo[0] + arreglo[1];



    }

    return 0;
}
