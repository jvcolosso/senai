#include <stdio.h>
/*Programa que avalia alunos m�dias*/
int main(){
	
	//Declara��o de Vari�veis
	int media;

	//Entrada de dados
	printf("D�gite a m�dia final do aluno de 0 a 100:");
	scanf("%d", &media);

	//Processamento e sa�da com condicional
	if(media >= 50)
		printf("Aprovado");
	else
		printf("Reprovado");
	
	
	//Fim
	return 0;
}	
