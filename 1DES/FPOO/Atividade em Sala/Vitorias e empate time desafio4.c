#include <stdio.h>
int main(){


//Declaração de Variáveis
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
//Saídas
	printf("vitorias = %d" , vitorias);
	printf("empates = %d" , empates);
		
return 0;	
}
