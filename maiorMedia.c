#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int mat1[4][5], total = 0, res[4] = {0};

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat1[i][j]);
            res[i] += mat1[i][j];
        }
        total += res[i];
    }
    system("clear");
    printf("Print da Matriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Maior media das linhas: ");
    for (i = 0; i < 4; i++)
    {
        if (res[i] >= (float)total / 4)
        {
            printf("Linha %d, valor: %d\n", i + 1, (float)res[i] / 5);
        }
    }
}