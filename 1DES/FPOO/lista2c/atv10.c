#include <stdio.h>
int main() {
    
	float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 6) 
        printf("Situa��o: Aprovado\n");
    else if (media >= 4) 
        printf("Situa��o: Recupera��o\n");
	else
       printf("Situa��o: Reprovado\n");
    
    return 0;
}
