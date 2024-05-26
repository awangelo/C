#include <stdio.h>

const char* nomesCidades[7] = {
    "Osgiliath", 
    "Minas Tirith",
    "Edoras",
    "Isengard",
    "Esgaroth",
    "The Shire",
    "Valfenda"
};

// Tabela de tempos de viagem
int tempos[7][7] = {
    {0, 2, 11, 6, 15, 11, 1},
    {2, 0, 7, 12, 4, 2, 15},
    {11, 7, 0, 11, 8, 3, 13},
    {6, 12, 11, 0, 10, 2, 1},
    {15, 4, 8, 10, 0, 5, 13},
    {11, 2, 3, 2, 5, 0, 14},
    {1, 15, 13, 1, 13, 14, 0}
};

// Função para exibir o menu e retornar a escolha do usuário
int escolha() {
    int escolha;
    printf("Selecione uma cidade:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d - %s\n", i, nomesCidades[i]);
    }
    printf("Digite o numero da cidade: ");
    scanf("%d", &escolha);
    return escolha;
}

int main() {
    int origem, destino;

    printf("Selecione a cidade de origem:\n");
    origem = escolha();

    printf("Selecione a cidade de destino:\n");
    destino = escolha();

    if (origem >= 0 && origem < 7 && destino >= 0 && destino < 7) {
        printf("O tempo necessario para viajar de %s para %s é %d horas.\n", nomesCidades[origem], nomesCidades[destino], tempos[origem][destino]);
    } else {
        printf("Escolha inválida.\n");
    }

    return 0;
}
