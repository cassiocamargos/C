/*
11- Escreva um programa que leia 10 n�meros informados pelo usu�rio e imprima o maior deles.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int num, maior, c;


    for(c=0;c<10;c++)
    {
        printf("Informe um n�mero: ");
        scanf("%i", &num);

        // se o n�mero digitado for maior OU for a primeira vez
        // guarda na vari�vel "maior" o n�mero
        if (num>maior || c==0)
            maior = num;

    }

    printf("Maior n�mero informado foi: %i\n", maior);

    return 0;
}
