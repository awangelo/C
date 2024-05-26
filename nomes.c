#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nome[5][20];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        fgets(nome[i], 20, stdin);
    }
    system("clear");
    for (i = 0; i < 5; i++)
    {   
        printf("Nome %d: %s\n", i + 1, (char *)nome[i] - 32);
    }
}