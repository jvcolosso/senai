#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Lista{
    int dado;
    struct Lista *prox;
};
struct Lista *inicio = NULL;
struct Lista *fim = NULL;
struct Lista *aux = NULL;
void mostraLista(){
    aux = inicio;
    printf("Lista:\n");
    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}
int push(int dado){
    aux = (struct Lista*) malloc(sizeof(struct Lista));
    if(aux == NULL) return 0;
    aux->dado = dado;
    aux->prox = NULL;
    if(inicio == NULL){
        inicio = aux;
        fim = aux;
    }else{
        fim->prox = aux;
        fim = aux;
    }
    return 1;
}

int pop(){
    if(inicio != NULL){
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
        return 1;
    }else
        return 0;
}

int slice(int index){
    int i;
    aux = inicio;
    if(index == 0){
        inicio = inicio->prox;
        free(aux);
        return 1;
    }else{
        for(i = 0; i < index-1; i++){
            aux = aux->prox;
        }
        struct Lista *aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
        return 1;
    }
    return 0;
}


int main(){
	setlocale(LC_ALL,"");
 	int op = 0;
 	int x;
 	do{
 		printf("\nEscolha uma op��o: \n1.Adicionar,\n2.Remover,\n0.Sair Escolha uma op�ao:");
 		scanf("%d", &op);
 		if(op == 1){
 			printf("Dig�te um n�mero inteiro: ");
 			scanf("%d", &x);
 			push(x);
 			mostraLista();
		 }else if (op == 2){
		 	printf("Dig�te o �ndice de valor a ser exclu�do: ");
		 	scanf("%d", &x);
		 	slice(x);
		 	mostraLista();
		 }
	 }while(op != 0);
 	printf("Obrigado por utilizar nosso programa.");
}
