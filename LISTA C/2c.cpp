/*
2- Tentando ensinar uma crian�a a contar de 1 (um) a N, uma professora imaginou um programa de computador que quando o aluno fornece um n�mero 
o computador imprime uma sequ�ncia de asteriscos ("*") relativos ao n�mero fornecido.

Exemplos: 	Aluno fornece o n�mero 2, o programa imprime "* *"
			Aluno fornece o n�mero 7, o programa imprime "* * * * * * *"
			
Escreva o programa que a professora imaginou e a ajude a ensinar seus alunos!
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int n, c; // declara��o

    c = 0;

    printf("Entre com um n�mero: ");
    scanf("%i", &n);

    while(c<n)
    {
        printf(" * ");
        c = c + 1;
    }

    return 0;
}
