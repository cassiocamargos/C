/*
31- A granja Franguinho na Panela possui um controle automatizado de cada frango da sua
produ��o. No p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo
s�o dois an�is para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com
chip custa R$ 1,20 e o anel de alimento custa R$ 0,80, fa�a um programa para calcular o gasto
total da granja para marcar todos os seus frangos.

C�SSIO CAMARGOS FERNANDES SILVA
RA: 6567B6
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	int qntf;
	float chip, alimentacao, total;
	
	printf ("Qual � a quantidade de frango? ");
	scanf("%i",&qntf);
	
	chip=qntf*1.20;
	alimentacao=qntf*2*0.80;
	total=chip+alimentacao;
	
	printf("O gasto total � de R$ %.2f",total);
	
	return 0;
}
