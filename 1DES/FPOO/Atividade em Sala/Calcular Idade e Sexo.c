#include <stdio.h>
int main(){
	int idade, sexo;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	printf("Informe se voc� � 1.Mulher, 2.Homem:");
	scanf("%d",&sexo);
	if(sexo == 1){
		if(idade<10) printf("Crian�a");
		else if(idade<15) printf("Adolescente");
		else if(idade<20) printf("Jovem");
		else if(idade<35) printf("Adulta");
		else if(idade<55) printf("Meia idade");
		else printf("Idosa");
	} 
	else {
		if(idade<20) printf("Crian�a");
		else if(idade<35) printf("Adolescente");
		else if(idade<40) printf("Jovem");
		else if(idade<50) printf("Adulto");
		else if(idade<55) printf("Meia idade");
		else printf("Idoso");
	}
	return 0;
}
