#include <stdio.h>
#include <string.h>

int main() {
	int i, j, k, acima = 0;
	float media = 0.0, alunos[10];
	printf("Digite as notas dos alunos: \n");

	for (i = 0; i < sizeof(alunos)/sizeof(alunos[0]); i++) {
		scanf("%f", &alunos[i]);
		media += alunos[i];
	}
	media /= sizeof(alunos)/sizeof(alunos[0]);
	for (k = 0; k < sizeof(alunos)/sizeof(alunos[0]); k++) {
		if (alunos[k] > media) {
			acima++;
		} 
	} 
	
	printf("Aluno nro\tNota\n");
	for (j = 0; j < sizeof(alunos)/sizeof(alunos[0]); j++) {
		printf("%d\t\t%.2f\n", j+1 , alunos[j]);
	}
	printf("\nMedia da turma: %.2f\n", media);
	printf("Acima da media: %d notas", acima);
}
2
