#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int a = 0.0;
    int b = 1.0;
    int end = 1000.0;
    while (a <= end && b <= end){
        printf("%.1d\n",a);
        printf("%.1d\n",b);
        a = a + b ;
        b = b + a ; }

    return (EXIT_SUCCESS);
}

