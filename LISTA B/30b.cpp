/* 30- Escreva um programa que receba um número e imprima uma das mensagens: “é múltiplo
de 3” ou “não é múltiplo de 3”. */

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int n;
	float resto;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	resto = n % 3;
	
	if (resto==0){
		printf("%i é multiplo de 3\n",n);
	} else
	printf("%i não é multiplo de 3\n",n);
	
	return 0;
}
