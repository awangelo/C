#include <stdio.h>
#include <string.h>

int main() {
    printf("digite uma string de ate 60 caracteres: ");
    
    char string[60];
    fgets(string, sizeof(string), stdin);

    printf("characteres digitados: %ld", strlen(string) - 1);
    printf("\n");
}