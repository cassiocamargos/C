/*
13- Escreva um programa que leia dois n�meros inteiros
A e B quaisquer indicando se A � m�ltiplo de B ou se B � m�ltiplo de A.
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
        printf("Entre com um n�mero: ");
        scanf("%i", &a);

        printf("Entre com outro n�mero: ");
        scanf("%i", &b);

        // A � m�ltiplo de B
        resto = a % b;
        if (resto == 0) {
            printf("A � multiplo de B\n");
        }

        // B � m�ltiplo de A
        resto = b % a;
        if (resto == 0) {
            printf("B � multiplo de A\n");
        }

        getchar(); // limpar o buffer
        printf("Deseja testar outro conjunto de n�meros? (S/N) ");
        scanf("%c", &resp);

    } while(resp=='S' || resp=='s');

    return 0;
}
