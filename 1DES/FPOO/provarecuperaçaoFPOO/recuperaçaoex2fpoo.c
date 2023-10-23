#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	
	int n[3];
	int media;
	
	printf("Digíte três números inteiros com espaço entre eles (ex:10 20 30): ");
	scanf("%d %d %d", &n[1], &n[2], &n[3]);
	
	media =  (n[1] + n[2] + n[3]) / 3;
	
	printf("A média é: %d", media);
	
	return 0;
}
