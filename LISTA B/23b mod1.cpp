/* 23- Em um determinado mercado o pre�o normal de venda de um produto � dado pelo valor
de custo acrescido de 40%. Cada produto possui um tipo (1 - Perec�vel, 2 - N�o
perec�vel). Al�m disso, o mercado trabalha com promo��es, conforme descriminado abaixo:

PRODUTOS PEREC�VEIS
Promo��o 		Crit�rio 														Desconto
Promo��o 1 		Valor de venda maior que R$20,00 								20%
Promo��o 2 		Valor de venda maior que R$10,00 e menor ou igual a R$20,00 	10%
Promo��o 3 		Outros valores de venda 										15%

PRODUTOS N�O PEREC�VEIS
Promo��o 		Crit�rio 										Desconto
Promo��o 		4 Valor de venda maior que R$50,00 				5 %

Escreva um programa que leia o valor de custo de um produto e seu tipo. Atrav�s das
informa��es acima, calcule e imprima o valor total do produto e a promo��o que ele se
enquadrou. Caso o produto n�o se enquadre nas promo��es acima, imprima �Promo��o 0�.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
    float valor,custo,total;
    int tipo;

    printf("Digitar valor de custo: ");
    scanf("%f", &custo);

    printf("Digitar tipo de produto (1-Perecivel / 2 - N�o Perec�vel): ");
    scanf("%i", &tipo);

    // valor de venda
    valor = custo * 1.4;

    printf("Valor de venda: %f\n", valor);

    if(tipo==1) // perecivel
    {
        if (valor>20)
        {
            total = valor * 0.8;
            printf("Promocao 1 - Valor: %.2f\n",total);
        }
        else
        {
            if (valor>10)
            {
                total = valor * 0.9;
                printf("Promocao 2 - Valor: %.2f\n", total);
            }
            else
            {
                total = valor * 0.85;
                printf("Promocao 3 - Valor:%.2f", total);
            }
        }
    }
    else // nao perecivel
    {
        if (valor>50)
        {
            total = valor * 0.95;
            printf("Promacao 4 - Valor: %.2f\n", total);
        }
        else
        {
            printf("Promo�ao 0 - Valor: %.2f\n", valor);
        }
    }


    return 0;
}
