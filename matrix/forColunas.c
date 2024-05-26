#include <stdio.h>

int main()
{
    int i, j;
    int matriz[4][3];

    for (i = 0; i < 4; i++)
    {
        printf("Digite os valores: \n");
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}