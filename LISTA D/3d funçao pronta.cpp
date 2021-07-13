/*
LISTA D - Usando uma função já pronta
3- Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um
programa que solicite o valor de cada produto, guarde estes valores em um vetor, e no final leia
este vetor e exiba o valor total da compra para a dona de casa.
*/

#include<stdio.h>
#include<locale.h>
#include "funcoes.c"
#define TAM 10
int main()
{
    setlocale(LC_ALL, "");
    int i;
    float produtos[TAM];

    for(i=0;i<TAM;i++)
    {
        printf("Entre com o valor do produto: ");
        scanf("%f", &produtos[i]);
    }

    printf("Total da sua compra foi: R$ %.2f\n", somatoria(produtos, TAM));

    return 0;
}
