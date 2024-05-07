	#include <stdio.h>
	#include <string.h>

	int main() {
		int i, valores[4]; 
		int len = sizeof(valores)/sizeof(valores[0]);
		
		for (i = 0; i < len; i++) {
			printf("Digite um valor: ");
			scanf("%d", &valores[i]);
		}
		
		printf("\nValores armazenados no array: \n");
		for (i = len - 1; i >= 0; i--) {
			printf("%d\n", valores[i]);
		} 
	}
