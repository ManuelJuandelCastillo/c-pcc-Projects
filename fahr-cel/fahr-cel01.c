/*
Imprimir tabla de equivalencias entre grados
fahrenheit y celsius
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("==============================================\n");
    printf("Tabla de equivalencia de fahrenheit a celsius.\n");
    printf("==============================================\n");

    float fahr = 0.0;
    int step = 20;

    while (fahr <= 300)
    {
        float celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f fahr  =>  %5.1f cels \n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
