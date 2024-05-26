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
    system("cls");
    printf("Print da Matriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("Media de cada linha: ");
    for (i = 0; i < 4; i++)
    {
        printf("%.2f ", (float)res[i] / 5);
    }
}