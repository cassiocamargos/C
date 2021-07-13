/*
11- Escreva um programa que leia 10 números informados pelo usuário e imprima o maior deles.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int num, maior, c;


    for(c=0;c<10;c++)
    {
        printf("Informe um número: ");
        scanf("%i", &num);

        // se o número digitado for maior OU for a primeira vez
        // guarda na variável "maior" o número
        if (num>maior || c==0)
            maior = num;

    }

    printf("Maior número informado foi: %i\n", maior);

    return 0;
}
