#include<stdio.h>
#include<locale.h>
#include<string.h>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

/*9- Escreva um programa que solicite um texto do usuário e imprima os 5 primeiros caracteres
deste texto.*/


int main()
{
	setlocale(LC_ALL, "");
	char texto [5];
	char i;
	
	printf("Insira um texto de até 100 caracteres, por favor: \n");
	for(i=0; i<5; i++)
	{
	scanf("%c", &texto[i]);
	printf("%c", texto[i]);
	}

	return 0;
}
