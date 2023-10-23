#include <stdio.h>
int main(){
	int raio, altura;
	int area, volume;
	int pi = 3.14;
	//Entradas
	printf("Digite o raio de um Cilindro em cm:");
	scanf("%d",&raio);
	printf("O raio é %d",&raio);
	
	printf("Digite a altura de um Cilindro em cm:");
	scanf("%d",&altura);
	printf("A altura é &d" ,&altura);
	//Processamento
	int areaLat = 2 * pi * raio * altura;
	int areaBase = 2 * raio * raio;
	area = areaLat + areaBase;
	volume = pi * raio * raio * altura;
	//Saídas
	printf("Raio = %.2d\n" , raio);
	printf("Altura = %.2d\n" , altura);
	printf("Area do cilindro = %.3d\n", area);
	printf("Volume do cilindro = %.3d\n", volume);
	return 0;
	
}
