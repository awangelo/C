#include <stdio.h>

int main() {
	int i, parimpar[100];
	
	for (i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			parimpar[i] = 1;
		} 
		else {
			parimpar[i] = 0;
		}
	} 
	
	for (i = 0; i < 100; i++) {
		printf("indice:%d\tvalor: %d\n", i, parimpar[i]);
	} 
	
}
