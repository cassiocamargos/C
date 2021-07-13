/*14- Na f�brica Rosca Feliz, recolheu-se uma amostra de 1000 parafusos para medi��o e pesagem.
Escreva um programa que permita:
1. Ler os valores do peso e do comprimento de cada parafuso da amostra;
2. Calcular o peso m�dio e o comprimento m�dio dos parafusos da amostra;
3. Calcular a percentagem de parafusos com peso superior � m�dia da amostra;
4. Calcular a diferen�a entre o parafuso mais comprido e o mais curto.

CASSIO CAMARGOS FERNANDES SILVA
RA: N6567B6
*/

#include<stdio.h>
#include<locale.h>
#define QTD 05

int main ()
{
	setlocale(LC_ALL, "");
	
	float peso[QTD], comp[QTD];
	float media=0, pesoM  = 0, compM =0, maior, menor, diferenca, 
	pesoS, pesoACM, pesoT, pesoMaior, cont =0, c=0;
	int i  = 0;

	
	for(i=0;i<QTD;i++)
	{
		printf("Digite o peso do parafuso %i de %i: ", i+1, QTD);
		scanf("%f", &peso[i]);
		
		printf("Digite o comprimento do parafuso %i de %i: ", i+1, QTD);
		scanf("%f", &comp[i]);
	}
	
	for(i=0;i<QTD;i++)
	{
		cont++;
		pesoM += peso[i];
		compM += comp[i];
		
		if (comp[i]>maior || i == 0)
		{
			maior = comp[i];
		}
		if (comp[i]<menor || i == 0)
		{
			menor = comp[i];
		}
		
		diferenca = maior - menor;
	}
	
 	media = pesoM/cont;
 		
	for(i=0;i<QTD;i++)
	{	
		if(peso[i]>media)
		{
			c++;	
		}
		
	}
	
	pesoS = (c/QTD)*100;	
	
	printf("O peso m�dio � de: %.2f\n", pesoM/cont);
	printf("O comprimento m�dio � de: %.2f\n", compM/cont);
	printf("A porcentagem de parafusos com peso superior ao da m�dia %.2f%%", pesoS);
	printf("A diferen�a entre o maior e o menor � de: %.f", diferenca);
	
	return 0;
}
