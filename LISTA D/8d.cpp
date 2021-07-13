#include<stdio.h>
#include<string.h>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

/*8- Escreva um programa que solicite um texto de 30 letras do usuário (1 letra em cada posição de
um vetor) e imprima o texto trocando as vogais pelo caractere “?”.*/


int main()
{
	char texto[30];
	char i;

	printf("Digite um texto com 30 caracteres:  ");
	scanf("%s",&texto);
	
	for(i=0;i<strlen(texto);i++)
	{
	if(texto[i]== 'a' || texto[i]== 'e' || texto[i]== 'i' || texto[i]== 'o' || texto[i]== 'u')
	{
	texto[i] = '?';
	}
	}
	printf("%s" , texto);

return 0;
}
