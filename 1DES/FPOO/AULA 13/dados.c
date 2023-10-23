#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	int numero, soma = 0;
	
	arquivo = fopen ("dados.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro, não foi possivel abrir o arquivo\n");
		return 1;	
}
	printf("Numeros do Arquivo: \n");
	while (fscanf(arquivo, "%d", &numero) == 1 ){
		printf(" %d", numero);
		soma += numero;
		}			
		
		fclose(arquivo);
		
		printf("\nA soma dos numeros é: %d\n", soma);
	
	return 0;
}
