#include<stdio.h>
#include<locale.h>

/*23- Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados pelo haras Coice de Mula.*/

int main(){
	
	setlocale(LC_ALL,"");
	
	int qntc, qntf;
	
	printf("Qual é a quantidade de cavalos? ");
	scanf("%i",&qntc);
	
	qntf=qntc*4;
	
	printf("São necessarias %i ferraduras", qntf);
	
	return 0;
}
