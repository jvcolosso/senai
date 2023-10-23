<<<<<<< HEAD
#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL ,"Portuguese");
	
	float juros, investimento;
	int meses;
	
		printf ("Digite o investimento mensal:\n ");
			scanf ("%f" ,&investimento);
		
		printf ("Digite a taxa de juros mensal:\n ");
			scanf ("%f" ,&juros);
	
	 	printf ("Digite quantos meses voce vai investir:\n ");
			scanf ("%i" ,&meses);
	
		float total = 0;
		printf("Mes:  Investimento:  Juros:  Total:\n\n\n");
		
	float calcinvestimento= investimento;
	float calcjuros;
	for (int i = 1; i <= meses; i++ ) {
		float porcent = (calcinvestimento * juros)/100;
		float conta = (calcinvestimento + porcent) + investimento;
		calcinvestimento *= 0; calcinvestimento += conta;
		
		printf("%d  R$%.2f  R$%.2f  R$%.2f\n\n", i+1, investimento, porcent, conta);
		
		
	}
return 0;	
}
=======
#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL ,"Portuguese");
	
	float juros, investimento;
	int meses;
	
		printf ("Digite o investimento mensal:\n ");
			scanf ("%f" ,&investimento);
		
		printf ("Digite a taxa de juros mensal:\n ");
			scanf ("%f" ,&juros);
	
	 	printf ("Digite quantos meses voce vai investir:\n ");
			scanf ("%i" ,&meses);
	
		float total = 0;
		printf("Mes:  Investimento:  Juros:  Total:\n\n\n");
		
	float calcinvestimento= investimento;
	float calcjuros;
	for (int i = 1; i <= meses; i++ ) {
		float porcent = (calcinvestimento * juros)/100;
		float conta = (calcinvestimento + porcent) + investimento;
		calcinvestimento *= 0; calcinvestimento += conta;
		
		printf("%d  R$%.2f  R$%.2f  R$%.2f\n\n", i+1, investimento, porcent, conta);
		
		
	}
return 0;	
}
>>>>>>> d8f354f94aa3fc8be1a4dbab24cbcd5f1d771166
