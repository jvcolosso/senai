#include <stdio.h>
/*Programa que L� um n�mero "a" e informa se � par ou �mpar*/
int main(){
	
	//Declara��o de var�aveis
	int a, b;
	
	//Entrada de dados
	printf("Digite um N�mero inteiro:");
	scanf("%d", &a);
	
	//Processamento (resto da divis�o)
	b = a % 2;
	
	//Sa�da com condicional SE(if) o resto for 1 � �mpar , sen�o � par
	if(b) printf("Impar");
	else printf("Par");
	
	//Fim 
	return 0;	
}
