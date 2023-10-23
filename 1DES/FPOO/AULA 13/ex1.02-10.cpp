#include <stdio.h>
#define SIZE 10
int pilha[SIZE];
int ponteiro = 0;
int i;
void mostraPilha(){
	printf("Pilha:\n");
	for(i = 0; i < ponteiro; i++)
		printf("%d\n", pilha[i]);
}
int push(int dado){
	if(ponteiro < SIZE){
		pilha[ponteiro] = dado;
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
 	setlocale(LC_ALL"");
 	int op = 0;
 	do{
 		printf("Escolha uma opção: \n1.Adicionar,\n 2.Remover,\n 0.Sair");
 		scanf("%d", &op);
 		if(op == 1){
 			printf("Diíte um número inteiro: ")
 			scanf("%d", &x);
 			push(x);
 			mostrarPilha;
		 }else if (op == 2){
		 	pop(2)
		 }
	 }while(op != 0);
 	
}
