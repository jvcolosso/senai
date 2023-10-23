#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	
	int n[2];
	int soma;
	
	printf("Digite dois números inteiros com espaço entre eles (ex:10 20):\n");
	scanf("%d %d", &n[1], &n[2]);
	
	soma = n[1] + n[2];
	
	printf("A Soma dos dois Números inteiros é: %d", soma);
	
	
	
	
	return 0;
}
