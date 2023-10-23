#include <stdio.h>
int main (){
	
	float salario,salario_familia;
	int filhos;
	
	printf("Digite o seu salario:");
	scanf("%f", &salario);
	
	printf("Digite a quantidade de filhos que possui:");
	scanf("%d", &filhos);
	
	if(salario <2000)
	salario_familia = filhos * 45;
	salario = salario + salario_familia;
	printf("Seu salário final será de :%.2f", salario);
	

	return 0;
}
