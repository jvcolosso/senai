#include <stdio.h>
#include <locale.h>
//Função que retorna a soma de dois parâmetros inteiros
int soma(int a, int b){
	return a + b;
}

//Função que retorna a m?dia de dois parâmetros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

//Exemplo de um procedimento que escreve uma frase 100 vezes
void procedimentoBart(){
	int i;
	for(i = 0; i < 100; i++)
		printf("Não vou atormentar a Lisa\n");
}

//Procedimento que escreve uma frase qualquer N vezes
void frases(char *frase, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%s\n", frase);
}

//Fun??o que calcula a m?dia de 3 notas
float media3(float a, float b, float c){
	return (a + b + c) / 3;
}

//Fun??o que calcula a m?dia de N notas
float mediaN(float notas[], int n){
	float total = 0;
	int i;
	for(i = 0; i < n; i++)
		total += notas[i];
	return total / n;
}
// Função Principal do Programa
int main(){
	setlocale(LC_ALL,"");
	printf("A soma de 123 + 44 = %d\n", soma(123,44));
	printf("A média de 100 e 75 é = %d\n", media(100,75));
	frases("2000 não é Mundial", 3);
	float notas[] = {100, 80, 30, 100, 45 };
	float nedia = mediaN(notas, 5);
	printf("5 Notas {100, 80, 30 ,100,45} Média:%1.f\n", media);
	procedimentoBart();
	return 0;
}
