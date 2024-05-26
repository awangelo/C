#include <stdio.h>

int main()
{
    int i, j;
    int matriz[4][3];

    for (size_t i = 0; i < 3; i++)
    {
        printf("Digite os valores da %d linha:\n", i + 1);
        for (size_t j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[j][i]);
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}