#include <stdio.h>
#include <string.h>

void getMedia(float notas[2][10], int *limite, float media[10]);
void setNotas(float notas[2][10], int *limite);
void setAlunos(int *limite, char alunos[10][10]);
void getResultado(float notas[2][10], char alunos[10][10], float media[10], int *limite);

void getMedia(float notas[2][10], int *limite, float media[10]) {
    for (int i = 0; i < *limite; i++)
    {
        media[i] = (notas[0][i] + notas[1][i]) / 2;
    }
}

void setNotas(float notas[2][10], int *limite) {
    for (int i = 0; i < 10; i++)
    {
        printf("Digite as notas do aluno #%d\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &notas[j][i]);
            if (notas[j][i] == -1)
            {
                notas[j][i] = 0;
                return;
            }
        }
        (*limite)++;
    }
}

void setAlunos(int *limite, char alunos[10][10]) {
    getchar();
    for (int i = 0; i < *limite; i++)
    {
        printf("Digite o nome do aluno #%d\n", i+1);
        fgets(alunos[i], 10, stdin);
        alunos[i][strcspn(alunos[i], "\n")] = '\0';
    }
}

void getResultado(float notas[2][10], char alunos[10][10], float media[10], int *limite) {
    printf("\n\t\t\tRelatorio de notas\n");

    for (int i = 0; i < *limite; i++) {
        printf("\nO aluno %10s tem as seguintes notas: P1 = %.2f e P2 = %.2f com a media de %.2f", alunos[i], notas[0][i], notas[1][i], media[i]);
    }
}

int main() {
    float notas[2][10] = {0};
    char alunos[10][10] = {0};
    float media[10] = {0};
    int limite = 0;

    setNotas(notas, &limite);
    setAlunos(&limite, alunos);
    getMedia(notas, &limite, media);
    getResultado(notas, alunos, media, &limite);

    printf("\n");
    return 0;
}
