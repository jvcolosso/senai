#include <stdio.h>
int main() {
    
	float salario_atual, novo_salario;
    
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    if (salario_atual >= 1500.0 && salario_atual < 1750.0) 
        novo_salario = salario_atual * 1.15;
    else if (salario_atual >= 1750.0 && salario_atual < 2000.0) 
        novo_salario = salario_atual * 1.12;
    else if (salario_atual >= 2000.0 && salario_atual < 3000.0) 
        novo_salario = salario_atual * 1.09;
    else if (salario_atual >= 3000.0) 
        novo_salario = salario_atual * 1.06;
    else 
        novo_salario = salario_atual;
    
    
    printf("O novo salário do funcionário é: %.2f\n", novo_salario);

    return 0;
}
