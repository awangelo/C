#include <stdio.h>
#include <stdlib.h>

void printmat(int mat[3][3]) {
    int i;
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];
    int i, j, k;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    system("cls");
    printf("Matriz original:\n");
    printmat(mat);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] *= k;
        }
    }

    printf("Matriz atualizada:\n");
    printmat(mat);

    return 0;
}