<<<<<<< HEAD
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL ,"Portuguese");
	float peso, altura;
	int nome;
	
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	
	printf("Digite seu altura em metros: ");
	scanf("%f", &altura);
	
	printf("Digite seu nome: ");
	scanf("%d", &nome);
	
//processamento
	 float imc = peso / (altura * altura);
	 printf ("seu imc: %.2f\n" ,imc );
	 
	if(imc <=18.5)
	 	printf ("Magreza ");
	  else if (imc <=24.9)
   		printf ("Normal");
   	  else if (imc <=29.9)
   		printf ("sobrepeso");
   	  else if (imc <=39.9)
   		printf ("Obesidade");
   	  else if (imc >=40.0)
   		printf ("Obesidade Grave");	
   	  else
		 printf("Va para a academia"); 
   		
//saidas 
//printf ("%.1f" ,imc * 10000);
return 0;
}
=======
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL ,"Portuguese");
	float peso, altura;
	int nome;
	
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	
	printf("Digite seu altura em metros: ");
	scanf("%f", &altura);
	
	printf("Digite seu nome: ");
	scanf("%d", &nome);
	
//processamento
	 float imc = peso / (altura * altura);
	 printf ("seu imc: %.2f\n" ,imc );
	 
	if(imc <=18.5)
	 	printf ("Magreza ");
	  else if (imc <=24.9)
   		printf ("Normal");
   	  else if (imc <=29.9)
   		printf ("sobrepeso");
   	  else if (imc <=39.9)
   		printf ("Obesidade");
   	  else if (imc >=40.0)
   		printf ("Obesidade Grave");	
   	  else
		 printf("Va para a academia"); 
   		
//saidas 
//printf ("%.1f" ,imc * 10000);
return 0;
}
>>>>>>> d8f354f94aa3fc8be1a4dbab24cbcd5f1d771166
