#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int x;
    printf("ingrese con que tabla quiere iniciar\n");
    scanf("%d", &x);
    int t;
    int r;
    printf("ingrese hasta que numero desea multiplicar\n");
    scanf("%d", &r);
    int l;
    printf("ingrese hasta que tabla quiere multiplicar\n");
    scanf ("%d", &l);

    for(contador=x; contador<=l; contador++){

            printf("Tabla del %d \n",contador);

            for( t = 1; t <= r; t++){

                printf("%d * %d = %d\n",t,contador,t*contador);

}
            printf("\n");
    }
      return (EXIT_SUCCESS);
}
