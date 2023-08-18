/*
imprimir tabla de equivalencias fahrenheit a celsius con ciclo for
*/

#include <stdio.h>

// definicion de constantes simbolicas
#define LOWER 0     // limite inferior de tabla
#define UPPER 300   // limite superior
#define STEP 20     // tamaño del incremento

int main(int argc, char const *argv[])
{

    printf("==============================================\n");
    printf("Tabla de equivalencia de fahrenheit a celsius.\n");
    printf("==============================================\n");
    
    int fahr;

    for (fahr =LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d fahr  =>  %5.1f cels\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
    
    return 0;
}
