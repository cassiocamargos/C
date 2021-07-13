#include<stdio.h>

int main(){
	
	float mili, polegadas;
	
	printf("digite a quantidade de chuva em milimetros: ");
	scanf("%f", &mili);
	printf("\n");
	
	polegadas= mili*25.4;
	
	printf("quantidade de chuva em polegadas: %.2f",polegadas);
	
	return 0;
}
