/*
LISTa C
1- Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um programa
que solicite o valor de cada produto e no final exiba o valor total da compra para a dona de casa.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float preco, total;
    int c;
    char resp;
    
    resp='s';

    while (resp=='S')
    {
        c = 0;
        total = 0;
        while(c<10)
        {
            printf("Informe o valor do produto: ");
            scanf("%f", &preco);

            total = total + preco;
            c = c + 1;
        }

        printf("Total da compra: %f\n", total);

        getchar();// limpar o enter do buffer
        
        printf("Deseja continuar? (S/N) ");
        scanf("%c", &resp);
    }

    return 0;
}
