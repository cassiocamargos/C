/*
6- Escreva um programa que leia 10 n�meros informados pelo usu�rio, guarde em um vetor. No
final leia o vetor novamente e imprima o maior deles.
*/
#include<stdio.h>
#define QTD 10
int main()
{
    int num[QTD];
    int c, maior;

    // obter os valores do usu�rio e guardar no vetor
    for(c=0;c<QTD;c++)
    {
        printf("Entre com o valor: ");
        scanf("%i", &num[c]);
    }


    // encontra o maior n�mero
    for(c=0;c<QTD;c++)
    {
        if (num[c]>maior || c==0)
        {
            maior = num[c];
        }
    }

    printf("O maior valor informado foi: %i\n", maior);

    return 0;
}
