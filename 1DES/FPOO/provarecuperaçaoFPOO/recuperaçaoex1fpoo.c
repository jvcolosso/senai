#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	
	int n[2];
	int soma;
	
	printf("Digite dois n�meros inteiros com espa�o entre eles (ex:10 20):\n");
	scanf("%d %d", &n[1], &n[2]);
	
	soma = n[1] + n[2];
	
	printf("A Soma dos dois N�meros inteiros �: %d", soma);
	
	
	
	
	return 0;
}
