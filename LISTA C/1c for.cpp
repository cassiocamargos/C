/*
LISTa C
1- Para ir ? feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um programa
que solicite o valor de cada produto e no final exiba o valor total da compra para a dona de casa.
*/

#include<stdio.h>
#include<locale.h>
#define QTD 10
int main()
{
    setlocale(LC_ALL,"");

    float preco, total;
    int c;
    
    total = 0; //c = 0;
           
    for(c=0;c<QTD;c++) //while(c<QTD)
    {
        printf("Informe o valor do produto: ");
        scanf("%f", &preco);
        
        total += preco; //total = total + preco;

        //c = c + 1;
        
    }

    printf("Total da compra: %f\n", total);

    return 0;
}
