#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomes[25][20];
    int i, j, count = 0;

    for (i = 0; i < 25; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], 20, stdin);
    }

    system("cls");

    for (i = 0; i < 25; i++) {
        for (j = 0; nomes[i][j] != '\0'; j++) {
            if (nomes[i][j] >= 'a' && nomes[i][j] <= 'z') {
                nomes[i][j] -= 32;
                count++;
            }
        }

        if (strcmp(nomes[i], "MARIA\n") == 0) {
            printf("Nome %d: %s\n", i + 1, nomes[i]);
        }
    }   

    printf("Total de caracteres convertidos: %d\n", count);

    return 0;
}