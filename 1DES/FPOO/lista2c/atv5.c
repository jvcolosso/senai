#include <stdio.h>
int main() {
    
	char nome[20];
    float preco, novo_preco;
    
    printf("Digite o nome da mercadoria: ");
    scanf("%s", nome);
    
    printf("Digite o preço da mercadoria: ");
    scanf("%f", &preco);
    
    if (preco < 1000) novo_preco = preco * 1.05; 
     else novo_preco = preco * 1.07; 
    
    
    printf("Nome da mercadoria: %s\n", nome);
    printf("Novo preço: %.2f\n", novo_preco);
    
    return 0;
}
