#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int x ;
    printf("ingrese con que tabla quiere iniciar\n");
    scanf("%d", &x);
    int t= 1;
    int r;
    printf("ingrese hasta que numero desea multiplicar\n");
    scanf("%d", &r);
    int l;
    printf("ingrese hasta que tabla quiere multiplicar\n");
    scanf ("%d", &l);

    while (x<=l ){
            printf("Tabla del %d \n",x);
            while(t <= r){
                printf("%d * %d = %d\n",t,x,t*x);
                t = t + 1;
            }
            x = x + 1;
            t = 1;
            printf("\n");
    }
      return (EXIT_SUCCESS);
}
