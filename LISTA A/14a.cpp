#include <stdio.h>
#include <stdlib.h>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char *argv[]) 
{
	
//Uma concessionária de veículos paga a seus funcionários um salário de R$350,00 mais uma comissão de R$200,00 por cada carro vendido. 
//Elabore um programa que leia o número de carros vendidos por um determinado funcionário e imprima seu salário total.
	
	int n_carros, comissao, salario;
		printf("Digite a quantidade de carros vendidos: ");
		scanf ("%i", & n_carros);
		
		comissao = n_carros * 200,00;
		salario = comissao + 350,00;
		
printf("O salario total sera de: %i \n ", salario);

return 0;
}
