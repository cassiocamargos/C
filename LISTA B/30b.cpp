/* 30- Escreva um programa que receba um n�mero e imprima uma das mensagens: �� m�ltiplo
de 3� ou �n�o � m�ltiplo de 3�. */

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
		printf("%i � multiplo de 3\n",n);
	} else
	printf("%i n�o � multiplo de 3\n",n);
	
	return 0;
}
