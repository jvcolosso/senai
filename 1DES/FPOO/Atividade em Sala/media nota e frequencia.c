#include <stdio.h>
/*Programa que avalia médias por nota e frequencia
"APROVADO" 50 ou Mais >= e "FREQUENCIA" MAIOR > 75% */
int main(){
	
	//Declaração de Variáveis
	int media, frequencia;

	//Entrada de dados
	printf("Dígite a média final do aluno de 0 a 100:");
	scanf("%d", &media);
	
	printf("Dígite a porcentagem de frequencia:");
	scanf("%d", &frequencia);

	//Processamento e saída com condicional
	if(media >= 50 && frequencia >=75)
		printf("Aprovado");
	
	else
	 	printf("Reprovado");
	 	
	//Fim
	return 0;
}	
