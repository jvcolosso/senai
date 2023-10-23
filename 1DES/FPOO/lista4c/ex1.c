#include <stdio.h>
#include <string.h>
#include <locale.h>
	int main() {
	setlocale(LC_ALL,"");
	char nome[5][20];
	float salario[5], reajuste, NVsa, aumento;
	int i;
	int escolha;
	//escolha de reajuste
	printf("\n ----------------------- ");

	printf("\n 1 - Reajuste salarial ");
	printf("\n 2 - Desconto ");
	printf("\n 3 - Fechar programa\n ");
	printf("-----------------------\n ");
	scanf("%d",&escolha);
		
	// estrutura switch
	switch (escolha) {
				
	case 1:
	{
					
	printf("\n\n Opcão escolhida: 1 \n\n");
				
	for(i = 0; i < 5; i++){
		printf("\nDigíte o nome do funcionário\n %d: ", i + 1);
		scanf("%s", &nome[i]);			
		printf("Digíte o salário do funcionário\n %d: ", i + 1);
		scanf("%f", &salario[i]);	
		}
			
	printf("\n\nDigíte a porcentagem de reajuste (ex:7%%):\n ");
		scanf("%f" ,&reajuste);
	printf("\n\n -----------------------\n");
					
		for(i = 0; i < 5; i++){
		NVsa = salario[i] + (salario[i] * reajuste / 100);
					
		printf("Nome: %s Salário: %2.f\n", nome[i], NVsa);
	}
						
		break;
		}
				
		case 2:
		{
		
		printf("\n\n Opcão escolhida: 2 \n\n");
				
		for(i = 0; i < 5; i++){
		printf("\nDigíte o nome do funcionário\n %d: ", i + 1);
			scanf("%s", &nome[i]);
		printf("Digíte o salário do funcionário\n %d: ", i + 1);
			scanf("%f", &salario[i]);	
		}
				
		printf("\n\nDigíte a porcentagem do desconto salarial (ex:7%%):\n ");
			scanf("%f" ,&reajuste);
		printf("\n\n -----------------------\n");
					
			for(i = 0; i < 5; i++){
			NVsa = salario[i] - (salario[i] * reajuste / 100);
					
			printf("Nome: %s Salário: %2.f\n", nome[i], NVsa);
		}				
				
		break;
		}
				
		default:
			{
			if( escolha==3)
			printf("\n\n Nenhuma opcão foi escolhida ");
			break;
			}
				
	}			
	
	
	return 0;
	}
