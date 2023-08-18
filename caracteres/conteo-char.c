#include <stdio.h>

// cuenta los caracteres de la entrada. 1ra versión

int main(int argc, char const *argv[])
{
    long nc;
    
    nc = 0;

    while (getchar() != EOF)
    {
        ++nc;
        printf("%1d\n", nc);
    }
    
    return 0;
}
