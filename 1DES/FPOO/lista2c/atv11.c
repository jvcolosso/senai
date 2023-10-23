#include <stdio.h>
#include <string.h> 
int main() {
    
	char tipo_peca[20];
    float preco, desconto, valor_final;

    printf("Digite o tipo da peça (camisa, bermuda, calca): ");
    scanf("%s", tipo_peca);

    printf("Digite o preço da peça: ");
    scanf("%f", &preco);

    desconto = 0;

    if (strcmp(tipo_peca, "camisa") == 0) 
        desconto = preco * 0.20;
    else if (strcmp(tipo_peca, "bermuda") == 0) 
        desconto = preco * 0.10;
    else if (strcmp(tipo_peca, "calca") == 0) 
        desconto = preco * 0.15;
    
    valor_final = preco - desconto;

    printf("Valor final da venda: %.2f\n", valor_final);

    return 0;
}
