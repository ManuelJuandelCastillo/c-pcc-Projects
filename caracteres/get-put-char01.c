#include <stdio.h>

// copia la entrada a la salida

int main(int argc, char const *argv[])
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    
    return 0;
}
