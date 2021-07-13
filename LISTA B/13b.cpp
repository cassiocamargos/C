/*
13- Escreva um programa que leia dois números inteiros
A e B quaisquer indicando se A é múltiplo de B ou se B é múltiplo de A.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int a, b, resto;
    char resp;

    do
    {
        printf("Entre com um número: ");
        scanf("%i", &a);

        printf("Entre com outro número: ");
        scanf("%i", &b);

        // A é múltiplo de B
        resto = a % b;
        if (resto == 0) {
            printf("A é multiplo de B\n");
        }

        // B é múltiplo de A
        resto = b % a;
        if (resto == 0) {
            printf("B é multiplo de A\n");
        }

        getchar(); // limpar o buffer
        printf("Deseja testar outro conjunto de números? (S/N) ");
        scanf("%c", &resp);

    } while(resp=='S' || resp=='s');

    return 0;
}
