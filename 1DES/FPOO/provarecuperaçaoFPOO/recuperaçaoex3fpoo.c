#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	
	char nome[5][20];
	float notas1[5] , notas2[5] , medias[5]
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digíte o nome do aluno %d: ", i + 1);
			scanf("%s", &nome[i]);
		printf("Digíte suas duas notas (de 0 a 10): ", i + 1);
			scanf("%f %f", &notas1[i], &notas2[i]);
	}
	printf("---------------------------------------------------------------\n");
	
	for(i = 0; i < 5; i++){
		medias[i] = (notas1[i] + notas2[i]) / 2;

		if(medias[i] > 5)
		printf(" Aluno:%s Média: %1.f  Você está Aprovado!\n ", nome[i], medias[i]);
		else if (medias[i] < 5)
		printf(" Aluno:%s Média: %1.f  Você está Reprovado!\n ", nome[i], medias[i]);
	}
	
	return 0;
}
