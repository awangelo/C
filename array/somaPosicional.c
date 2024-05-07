#include <stdio.h>
#include <string.h>

int main() {
	int i, x[10], y[10], res[10];
	
	printf("Digite os valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\nDigite os valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &y[i]);
    }
    
    for (i = 0; i < 10; i++) {
		res[i] = x[i] + y[i];
	}

	printf("resultado: ");
	for (i = 0; i < 10; i++) {
		printf("%d\n", res[i]);
	}
}
