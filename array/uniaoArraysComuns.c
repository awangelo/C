#include <stdio.h>

int main() {
	int i, j, k = 0, a[10], b[20], c[30];

	printf("Insira os valores do array a: \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	} 
	printf("\nInsira os valores do array b: \n");
	for (i = 0; i < 20; i++) {
		scanf("%d", &b[i]);
	} 
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			if (a[i] == b[j]) {
				c[k] = a[i];
				k++;
				break;
			} 
		} 
	}
	
	if (k == 0) {
		printf("Nenhum elemento igual!");
	}
	else {
		
		printf("Elementos comuns: ");
		for (i = 0; i < k; i++) {
			printf("%d ", c[i]);
		}
	} 
}
