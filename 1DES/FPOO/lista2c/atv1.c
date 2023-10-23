#include <stdio.h>
int main() {
	
	float preco_produto,novo_preco;
	float desconto= 00.8;
	
	printf("Digite o preço do produto:");
	scanf("%f", &preco_produto);
	
	if(preco_produto >=1000)
	novo_preco = preco_produto * desconto;
	printf("O valor com desconto de 8%% fica: %.2f" , novo_preco);
	
	return 0;
}
