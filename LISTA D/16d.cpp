/*
Lista D
16- Escreva um programa que leia um número inteiro A e uma matriz Tabela[30,30] de inteiros.
Em seguida, o programa deve indicar:
1. Quantos valores iguais a A existem na matriz;
2. Quantos valores iguais a A existem na diagonal principal da matriz;
3. Quantos valores iguais a A existem na primeira coluna da matriz;
4. Quantos valores maiores do que A existem na matriz;
5. O valor da soma dos valores maiores do que A existentes na matriz.
*/

#include <stdio.h>
#include <locale.h>
#define QTD 30

int main()
{
    setlocale(LC_ALL, "");

    int tabela[QTD][QTD], a, i, j, cigual=0, cigualdiagonal=0, cigualprimeiracol=0, cmaior=0, amaior=0;

    // leitura de todos os dados da matriz
    for(i=0;i<QTD;i++)
    {
        for(j=0;j<QTD;j++)
        {
            printf("Entre com o dado para a posição [%i][%i]: ", i,j);
            scanf("%i", &tabela[i][j]);
        }
    }

    printf("Entre com uma referência numérica: ");
    scanf("%i", &a);

    for(i=0;i<QTD;i++)
    {
        for(j=0;j<QTD;j++)
        {
            //1. Quantos valores iguais a A existem na matriz;
            if(tabela[i][j]==a)
                cigual++;

            //2. Quantos valores iguais a A existem na diagonal principal da matriz;
            if(i==j)
                if(tabela[i][j]==a)
                    cigualdiagonal++;

            //3. Quantos valores iguais a A existem na primeira coluna da matriz;
            if(j==0)
                if(tabela[i][j]==a)
                    cigualprimeiracol++;

            //4. Quantos valores maiores do que A existem na matriz;
            if(tabela[i][j]>a)
            {
                cmaior++;

                //5. O valor da soma dos valores maiores do que A existentes na matriz.
                amaior += tabela[i][j];
            }
        }
    }

    printf("1. Quantos valores iguais a A existem na matriz: %i\n", cigual);
    printf("2. Quantos valores iguais a A existem na diagonal principal da matriz: %i\n", cigualdiagonal);
    printf("3. Quantos valores iguais a A existem na primeira coluna da matriz: %i\n", cigualprimeiracol);
    printf("4. Quantos valores maiores do que A existem na matriz: %i\n", cmaior);
    printf("5. O valor da soma dos valores maiores do que A existentes na matriz: %i\n", amaior);

    return 0;
}
