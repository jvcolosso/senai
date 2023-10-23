#include <stdio.h>
#include <string.h>
#include <locale.h>

FILE *entrada;
char arqEntrada[] = "entrada.csv";
struct pessoa {
	int id;
	char nome[50];
	char nascimento [11];
};

int contLinhas(){
	int cont = 0;
	char linha[100];
	entrada = fopen(arqEntrada, "r");
	if(entrada == NULL)
		printf("Erro ao ler o arquivo.");
	else(
		fgets(linha, 100, entrada);
		while(fgets(linha, 100, entrada)!= NULL
			cont++;
	}
	fclose(entrada);
	return cont;
}

struct Pessoa getPessoa(char *linha){
	struct Pessoa p;
	p.id = atoi(strtok(linha,";"));
	strcpy(p.nome,strtok(NULL)
}
	
}

int main(){
	printf("O arquivo possui %d linhas\n", contLinhas());
}
