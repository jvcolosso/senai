#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	
	int n[3];
	int media;
	
	printf("Dig�te tr�s n�meros inteiros com espa�o entre eles (ex:10 20 30): ");
	scanf("%d %d %d", &n[1], &n[2], &n[3]);
	
	media =  (n[1] + n[2] + n[3]) / 3;
	
	printf("A m�dia �: %d", media);
	
	return 0;
}
