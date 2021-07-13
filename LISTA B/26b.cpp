/*Escreva um programa que pede para o usuário entrar um número correspondente a
um dia da semana e que então apresente na tela o nome do dia. Dica: Em C, utilize o
comando switch.*/


#include <cstdlib>
#include <iostream>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char *argv[])
{
	int dia;
	
	printf ("1) segunda\n");
	printf ("2) terca\n");
	printf ("3) quarta\n");
	printf ("4) quinta\n");
	printf ("5) sexta\n");
	printf ("6) sabado\n");
	printf ("7) domingo\n");
	printf ("entre com o numero referente ao dia da semana: ");
	scanf ("%i", &dia);
		
	switch (dia)
	{
		case 1:
			printf("segunda \n");
			break;
		case 2:
			printf("terca \n");
			break;
		case 3:
			printf("quarta \n");
			break;
		case 4:
			printf("quinta \n");
			break;
		case 5:
			printf("sexta \n");
			break;
		case 6:
			printf("sabado \n");
			break;
		case 7:
			printf("domingo \n");
			break;
		default:
			printf ("\n\nopcao de operacao invalida. \n\n");
			break;	
	}
	
	return 0;
}
