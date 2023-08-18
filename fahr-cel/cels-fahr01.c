/*
imprimir tabla de equivalencia de temperaturas celsius a fahrenheit
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("==============================================\n");
    printf("Tabla de equivalencia de celsius a fahrenheit.\n");
    printf("==============================================\n");

    float cels = -10;
    int step = 10;

    while (cels <= 100)
    {
        float fahr = ((9.0/5.0)*cels)+32;
        printf("%3.0f cels  =>  %5.1f fahr\n", cels, fahr);
        cels += step;
    }
    
    return 0;
}
