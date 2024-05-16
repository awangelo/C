#include <stdio.h>

int main() {
    int i;
    float a[20], b[20], c[20];
    char o[20];

    printf("Insira os valores do array a: \n");
	for (i = 0; i < 20; i++) {
		scanf("%f", &a[i]);
	}

    printf("\nInsira os valores do array b: \n");
    for (i = 0; i < 20; i++) {
        scanf("%f", &b[i]);
    }

    printf("\nInsira os chars da operacao: \n");
    for (i = 0; i < 20; i++) {
        scanf(" %c", &o[i]); // '\0' ou ' ' para pular o \n
    }

    for (i = 0; i < 20; i++) {
        switch(o[i]) {
            case '+':
                printf("%.2f\n", c[i] = a[i] + b[i]);
                break;
            case '-':
                printf("%.2f\n", c[i] = a[i] - b[i]);
                break;
            case '*':
                printf("%.2f\n", c[i] = a[i] * b[i]);
                break;
            case '/':
                printf("%.2f\n", c[i] = a[i] / b[i]);
                break;
            default:
                printf("Operacao n:%d invalida\n", i);
        }
    }
    printf("\n");
}