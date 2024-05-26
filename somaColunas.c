#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int mat1[4][5], total = 0, res[5] = {0};

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat1[i][j]);
            res[j] += mat1[i][j];
        }
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
    
    printf("Soma de cada coluna: ");
    for (j = 0; j < 5; j++)
    {
        printf("%d ", res[j]);
        total += res[j];
    }
    printf("\nTotal geral: %d\n", total);
}