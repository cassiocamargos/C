/*6- Escreva um programa que leia 10 n�meros informados pelo usu�rio,
guarde em um vetor. No final leia o vetor novamente e imprima o maior deles.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 10

float impmaior(float num[], int n)
{
    int c, m;

    for(c=0;c<n;c++) {
        if (num[c]>m || c==0)
        {
            m = num[c];
        }
    }
    return m;
}

int main()
{
    float n[TAM];
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("Digitar 10 n�meros %i de %i: ",i+1,TAM);
        scanf("%f",&n[i]);
    }

    printf("O Valor maior �: %f\n",impmaior(n, TAM));
    return 0;
}
