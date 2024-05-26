#include <stdio.h>

int main()
{
    int i, j;
    int mat1[5][5], mat2[5][5], soma[5][5] = {0};

    printf("Digite os valores da matriz 1:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat1[j][i]);
        }
    }

    printf("Digite os valores da matriz 2:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat2[j][i]);
            soma[j][i] += mat1[j][i] + mat2[j][i]; 
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", soma[j][i]);
        }
        printf("\n");
    }
}