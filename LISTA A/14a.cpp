#include <stdio.h>
#include <stdlib.h>

//aluno: C�ssio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char *argv[]) 
{
	
//Uma concession�ria de ve�culos paga a seus funcion�rios um sal�rio de R$350,00 mais uma comiss�o de R$200,00 por cada carro vendido. 
//Elabore um programa que leia o n�mero de carros vendidos por um determinado funcion�rio e imprima seu sal�rio total.
	
	int n_carros, comissao, salario;
		printf("Digite a quantidade de carros vendidos: ");
		scanf ("%i", & n_carros);
		
		comissao = n_carros * 200,00;
		salario = comissao + 350,00;
		
printf("O salario total sera de: %i \n ", salario);

return 0;
}
