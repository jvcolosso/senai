#include <stdio.h>
int main() {

	float salario, desconto, salario_final;
    
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    
    if (salario <= 1212.00) desconto = salario * 0.075;
     else if (salario <= 2427.35) desconto = salario * 0.09;
     else if (salario <= 3641.03) desconto = salario * 0.12;
     else if (salario <= 7087.22) desconto = salario * 0.14;
     else desconto = 7087.22 * 0.14;
    
   
    salario_final = salario - desconto;
    
    printf("Desconto de INSS: %.2f\n", desconto);
    printf("Salário final: %.2f\n", salario_final);
    
    return 0;
}
