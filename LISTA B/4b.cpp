/*
4- Dado um número inteiro qualquer, fornecido pelo usuário,
descobrir se o mesmo é par ou ímpar.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	int n, resto;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &n);

    // retorna o resto da divisão de N por 2
    resto = n % 2;

    if(resto==0)
    {
        // se verdadeiro (S)
        printf("Numero PAR");
    }
    else
    {
        // se for falso (N)
        printf("Numero IMPAR");
    }

    return 0;
}
