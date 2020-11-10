
#include <stdio.h>
#include <stdlib.h>

int main()
{
     float primero = 9.0;
     float segundo = 9.0;
     float tercero = 9.0;
     float cuarto =30.0;

    if (primero > segundo && primero > tercero && primero > cuarto )
            printf("El mayor es el %.1f", primero);
    else {
        if (segundo > primero && segundo > tercero && segundo > cuarto )
                printf("El mayor es el %.1f", segundo);
        else
            if (tercero > primero && tercero > segundo && tercero> cuarto )
                    printf("El mayor es el %.1f", tercero);
            else
                if (cuarto > primero && cuarto > segundo && cuarto> tercero )
                        printf("El mayor es el %.1f", cuarto);
                    else
                        printf("Los 4 son iguales "); }

     return (EXIT_SUCCESS);
}
