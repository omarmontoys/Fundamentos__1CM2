
#include <stdio.h>
#include <stdlib.h>

int main()
{
     float primero = 9.0;
     float segundo = 5.0;
     float tercero = 7.0;

    if (primero > segundo && primero > tercero )
            printf("El mayor es el %.1f", primero);
    else {
        if (segundo > primero && segundo > tercero )
                printf("El mayor es el %.1f", segundo);
        else
            if (tercero > primero && tercero > segundo)
                    printf("El mayor es el %.1f", tercero);
            else
                 printf("Los 3 son iguales "); }

     return (EXIT_SUCCESS);
}
