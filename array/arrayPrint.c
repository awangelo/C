#include <stdio.h>
#include <string.h>

int main() {
	int i, j, nmrs[4]; 
	printf("Digite 4 numeros: \n");
	
	for (i = 0; i < sizeof(nmrs)/sizeof(nmrs[0]); i++) {
		scanf("%d", &nmrs[i]);
	}
	for (j = 0; j < sizeof(nmrs)/sizeof(nmrs[0]); j++) {
		printf("Elemento n %d: %d\n", j, nmrs[j]);
	} 
}
