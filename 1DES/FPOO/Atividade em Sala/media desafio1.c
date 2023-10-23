#include <stdio.h>
/*Programa que avalia alunos médias*/
int main(){
	
	//Declaração de Variáveis
	int media;

	//Entrada de dados
	printf("Dígite a média final do aluno de 0 a 100:");
	scanf("%d", &media);

	//Processamento e saída com condicional
	if(media >= 50)
		printf("Aprovado");
	else
		printf("Reprovado");
	
	
	//Fim
	return 0;
}	
