#include <stdio.h>
/*Programa que calcula a Media de tres notas e a frenquencia de aulas*/
int main(){
	//Declaração de Variáveis
	int a, b, c, media;
	float aulas, presencas, frequencia;
	
	//Entrada de Dados
	printf("Digite a Nota 1:");
		scanf("%d" , &a);

	printf("Digite a Nota 2:");
		scanf("%d" , &b);

	printf("Digite a Nota 3:");
		scanf("%d" , &c);
		
	printf("Digite o Total de Aulas Dadas:");
		scanf("%d" , &aulas);
	printf("Digite o Total de Presencas:");
		scanf("%d" , &presencas);

	//Processamento
	media = (a + b + c) / 3;
	frequencia = presencas / aulas;

	//Saidas Parciais
	printf("A media é = %d\n" , media);
	printf("A Frequencia = %.2f\t ou %.0f%%\n", frequencia, frequencia * 100);
	
	//Processamento e Saida com condicional
	if(media >= 50 && frequencia >=0.75)
		printf("Aprovado");
	else
	 	printf("Reprovado");
	
	return 0;
}	

