#include <stdio.h>
/*Programa que avalia m�dias por nota e frequencia
"APROVADO" 50 ou Mais >= e "FREQUENCIA" MAIOR > 75% */
int main(){
	
	//Declara��o de Vari�veis
	int media, frequencia;

	//Entrada de dados
	printf("D�gite a m�dia final do aluno de 0 a 100:");
	scanf("%d", &media);
	
	printf("D�gite a porcentagem de frequencia:");
	scanf("%d", &frequencia);

	//Processamento e sa�da com condicional
	if(media >= 50 && frequencia >=75)
		printf("Aprovado");
	
	else
	 	printf("Reprovado");
	 	
	//Fim
	return 0;
}	
