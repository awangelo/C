#include <stdio.h>

int main()
{
    int c;

    while (1)
    {
        c = getchar();
        if (c == EOF)
        {
            printf("EOF, valor: %d\n", c);
            break;
        }
        else
        {
            putchar(c);
        }
    }
}