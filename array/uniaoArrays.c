#include <stdio.h>

int main() {
	int i, a[10], b[20], c[30];

	printf("Insira os valores do array a: \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		c[i] = a[i];	
	} 
	printf("\nInsira os valores do array b: \n");
	for (i = 0; i < 20; i++) {
		scanf("%d", &b[i]);
		c[i+10] = b[i];
	} 
	
	printf("Uniao dos vetores:");
	
	for (i = 0; i < 30; i++) {
		printf("%d ", c[i]);
	} 
}
