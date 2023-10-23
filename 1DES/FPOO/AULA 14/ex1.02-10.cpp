#include <stdio.h>
#define SIZE 10
#include <locale.h>

int fila[SIZE];
int ponteiro = 0;
int i;
void mostraFila(){
	printf("Pilha:\n");
	for(i = 0; i < ponteiro; i++)
		printf("%d\n", fila[i]);
}
int push(int dado){
	if(ponteiro < SIZE){
		fila[ponteiro] = dado;
		ponteiro++;
		return 1;
	} 
	else return 0;
}
int pop(){
	if(ponteiro >= 0){
		ponteiro--;
		return 1;
	}else
		return 0;
}
int main(){
	setlocale(LC_ALL, "");
 	int op = 0;
 	do{
 		printf("Escolha uma opção: \n1.Adicionar,\n 2.Remover,\n 0.Sair");
 		scanf("%d", &op);
 		if(op == 1){
 			printf("Diíte um número inteiro: ");
 			scanf("%d", &x);
 			push(x);
 			mostrarFila();
		 }else if (op == 2){
		 	pop();
		 	mostrarFila();
		 }
	 }while(op != 0);
 	printf("Obrigado por utilizar nosso programa.")
}
