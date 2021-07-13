/*
5- Escreva um programa que leia a idade, o sexo e o peso dos jogadores de um time de basquete
misto, guarde estes valores em 3 vetores. No final leia os vetores e imprima a m�dia de idade e a
m�dia de peso deste time, separando entre mulheres e homens.
*/
#include<stdio.h>
#include<locale.h>
#define QTD 6
int main()
{
    setlocale(LC_ALL,"");
    int cm = 0, cf = 0, aim = 0, aif = 0, i;
    float apm = 0, apf = 0;

    int idade[QTD];
    char sexo[QTD];
    float peso[QTD];

    for(i=0;i<QTD;i++)
    {
        printf("Entre com o sexo (F/M) do jogador %i: ", i+1);
        scanf("%c", &sexo[i]);

        printf("Entre com a idade do jogador %i: ", i+1);
        scanf("%i", &idade[i]);

        printf("Entre com o peso do jogador %i: ", i+1);
        scanf("%f", &peso[i]);

        getchar(); //limpar o buffer

    }

    for(i=0;i<QTD;i++)
    {
        if (sexo[i]=='F')
        {
            cf++;
            aif += idade[i];
            apf += peso[i];
        }
        else
        {
            cm++;
            aim += idade[i];
            apm += peso[i];
        }
    }

    printf("\nHOMENS\n");
    printf("M�dia de peso:  %.2f\n", apm/cm);
    printf("M�dia de idade:  %i\n", aim/cm);

    printf("\nMULHERES\n");
    printf("M�dia de peso:  %.2f\n", apf/cf);
    printf("M�dia de idade:  %i\n", aif/cf);

    return 0;
}
