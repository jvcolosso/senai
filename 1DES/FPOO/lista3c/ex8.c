#include <stdio.h>
int main(){
	
	int numero, fatorial = 1 ;

	printf("Digite um numero inteiro e positivo:");
	scanf("%d", &numero);
	
	if (numero < 0) {
		printf("O numero deve ser positivo.\n");
	
		return 0;
	}
	
	for (int i = 1; i <= numero; i++){
			fatorial *= i;
	}
	
		printf("O fatorial de %d e: %d\n" , numero, fatorial);
		
		return 0;
	}
