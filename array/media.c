#include <stdio.h>
#include <string.h>

int main() {
	int i;
	float media = 0.0, alunos[10];
	int len = sizeof(alunos)/sizeof(alunos[0]);
	printf("Digite as notas dos alunos: \n");

	for (i = 0; i < len; i++) {
		scanf("%f", &alunos[i]);
		media += alunos[i];
	}
	media /= len;
	
	printf("Aluno nro\tNota\n");
	for (i = 0; i < len; i++) {
		printf("%d\t\t%.2f\n", i+1 , alunos[i]);
	}
	printf("\nMedia da turma: %.2f\n", media);
}
