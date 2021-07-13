/*
16- No ensino público, normalmente as notas são dadas através de conceitos (A, B, C, D, E).
Elabore um programa que leia uma nota numérica de 0 a 10 e exiba o conceito relativo a esta
nota, conforme tabela abaixo.
Nota            Conceito
De 0.0 à 1.9    E
De 2.0 à 4.9    D
De 5.0 à 6.9    C
De 7.0 à 8.9    B
De 9.0 à 10.0   A
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    float nota;

    printf("Informe sua nota: ");
    scanf("%f", &nota);

    if (nota<=1.9)
    {
        printf("E\n");
    }
    else
    {
        if (nota<=4.9)
        {
            printf("D\n");
        }
        else
        {
            if (nota<=6.9)
            {
                printf("C\n");
            }
            else
            {
                if (nota<=8.9)
                {
                    printf("B\n");
                }
                else
                {
                    printf("A\n");
                }
            }
        }
    }
    return 0;
}
