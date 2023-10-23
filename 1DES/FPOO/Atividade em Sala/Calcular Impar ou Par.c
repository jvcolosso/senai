#include <stdio.h>
/*Programa que LÊ um número "a" e informa se é par ou ímpar*/
int main(){
	
	//Declaração de varíaveis
	int a, b;
	
	//Entrada de dados
	printf("Digite um Número inteiro:");
	scanf("%d", &a);
	
	//Processamento (resto da divisão)
	b = a % 2;
	
	//Saída com condicional SE(if) o resto for 1 é ímpar , senão é par
	if(b) printf("Impar");
	else printf("Par");
	
	//Fim 
	return 0;	
}
