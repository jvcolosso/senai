#include <stdio.h>
int main(){
    int velocidade;
    int distancia;
   

	//Entrada de Dados   
    printf("D�gite a velocidade de um carro em Km/h:");
    scanf("%d", &velocidade);
    
    printf("D�gite a distancia em quilometros percorridos:");
    scanf("%d", &distancia);

	//Processamento
	int result = velocidade / distancia;

	//Saidas
	printf("velocidade = %d\n" ,velocidade);
	printf("distancia= %d\n",distancia);
	printf("O tempo a ser percorrido= %d\n",result);
	
    return 0;
}
    
