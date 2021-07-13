/*
3- Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um
programa que solicite o valor de cada produto, guarde estes valores em um vetor, e no final leia
este vetor e exiba o valor total da compra para a dona de casa.
*/

#define TAM 10
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float precos[TAM], apreco = 0;
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("Entre com o valor: ");
        scanf("%f", &precos[i]);
    }

    for(i=0;i<TAM;i++)
    {
        apreco += precos[i];  //apreco = apreco + precos[i];
    }

    printf("Valor total da compra: R$ %.2f\n", apreco);

    return 0;
}
