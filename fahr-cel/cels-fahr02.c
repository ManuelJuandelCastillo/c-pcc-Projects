/*
tabala de equivalencia celsius a fahrenheit con ciclo for
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("==============================================\n");
    printf("Tabla de equivalencia de celsius a fahrenheit.\n");
    printf("==============================================\n");

    int cels;
    for (cels = -10; cels <= 110; cels += 10)
    {
        printf("%3d cels  =>  %5.1f fahr\n", cels, ((9.0/5.0)*cels)+32);
    }
    

    return 0;
}
