#include <stdio.h>
int main() {
   
    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    int maior, menor;

    if (numero1 > numero2) {
        maior = numero1;
        menor = numero2;
    }else 
        maior = numero2;
        menor = numero1;

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
