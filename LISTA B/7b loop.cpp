/*
LISTA B - Exerc�cio 7 com LOOP
7- Escreva um programa que leia um n�mero inteiro e exiba se ele �
positivo, negativo ou zero.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    // declara��o das vari�veis
    int n;
    char resp;

    do // fa�a
    {
        printf("Entre com um n�mero: ");
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

        printf("Deseja verificar outro n�mero? (S/N) ");
        scanf("%c", &resp);
    }
    while(resp=='S' || resp=='s'); // enquanto

    return 0;
}
