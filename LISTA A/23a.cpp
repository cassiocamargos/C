#include<stdio.h>
#include<locale.h>

/*23- Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os
cavalos comprados pelo haras Coice de Mula.*/

int main(){
	
	setlocale(LC_ALL,"");
	
	int qntc, qntf;
	
	printf("Qual � a quantidade de cavalos? ");
	scanf("%i",&qntc);
	
	qntf=qntc*4;
	
	printf("S�o necessarias %i ferraduras", qntf);
	
	return 0;
}
