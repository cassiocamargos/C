/*
LISTA B - Exercício 7 com LOOP
7- Escreva um programa que leia um número inteiro e exiba se ele é
positivo, negativo ou zero.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    // declaração das variáveis
    int n;
    char resp;

    do // faça
    {
        printf("Entre com um número: ");
        scanf("%i", &n);

        if(n>0) {
            printf("Positivo\n\n");
        }
        else {
            if (n<0) {
                printf("Negativo\n\n");
            }
            else {
                printf("Zero\n\n");
            }
        }

        getchar(); // limpar o enter do buffer

        printf("Deseja verificar outro número? (S/N) ");
        scanf("%c", &resp);
    }
    while(resp=='S' || resp=='s'); // enquanto

    return 0;
}
