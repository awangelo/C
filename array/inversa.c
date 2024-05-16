#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}