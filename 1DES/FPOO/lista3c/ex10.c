#include <stdio.h>
int main() {
    
	int numeros[10];
    int maior;

    printf("Digite 10 n�meros inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);}

    maior = numeros[0];

    for (int i = 1; i < 10; i++) 
        if (numeros[i] > maior) 
            maior = numeros[i];
        
    printf("O maior numero digitado �: %d\n", maior);

    return 0;
}

