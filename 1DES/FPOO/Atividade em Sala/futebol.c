#include <stdio.h> //Entrada e Sa�da padr�o
#include <locale.h> //Configura��es de Localiza��o
#include <string.h> //Strings s�o vetores de caracteres

int main(){
	setlocale(LC_ALL,"");//Configura��es
	char times[5][20];
	int pontos[5];
	int i;
//Entrada	
	for(i = 0; i < 5; i++){
		printf("Digite o nome do %d� time: ", i + 1);
		gets(times[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digite pontos do %s: ",times[i]);
		scanf("%d",&pontos[i]);
	}
	printf("%s pontos: %d\n", times[0], pontos[0]);
	printf("%s pontos: %d\n", times[1], pontos[1]);
	printf("%s pontos: %d\n", times[2], pontos[2]);
	printf("%s pontos: %d\n", times[3], pontos[3]);
	printf("%s pontos: %d\n", times[4], pontos[4]);

	return 0;
}
