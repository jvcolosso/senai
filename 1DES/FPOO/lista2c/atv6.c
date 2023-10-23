#include <stdio.h>
int main() {
    
	int numeros[6];
    int maior;

    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < 6; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);}

    maior = numeros[0];

    for (int i = 1; i < 6; i++) 
        if (numeros[i] > maior) 
            maior = numeros[i];
        
    printf("O maior número digitado é: %d\n", maior);

    return 0;
}

