#include <stdio.h>
int main(){


//Declara��o de Vari�veis
	int nome;
	int vitorias, empates;
	int nv , ne;
	
//Entrada de Dados
	printf("Digite a Quantidade de Vitorias:");
		scanf("%d" , &vitorias);
	printf("Digite a Quantidade de Empates:");
		scanf("%d" , &empates);
	printf("Digite o Nome do Time:");
		scanf("%d" , &nome);	
	
//Processamento
	int vitorias = nv * 3;
	int empates = ne * 1;
//Sa�das
	printf("vitorias = %d" , vitorias);
	printf("empates = %d" , empates);
		
return 0;	
}
