/* 23- Em um determinado mercado o preço normal de venda de um produto é dado pelo valor
de custo acrescido de 40%. Cada produto possui um tipo (1 - Perecível, 2 - Não
perecível). Além disso, o mercado trabalha com promoções, conforme descriminado abaixo:

PRODUTOS PERECÍVEIS
Promoção 		Critério 														Desconto
Promoção 1 		Valor de venda maior que R$20,00 								20%
Promoção 2 		Valor de venda maior que R$10,00 e menor ou igual a R$20,00 	10%
Promoção 3 		Outros valores de venda 										15%

PRODUTOS NÃO PERECÍVEIS
Promoção 		Critério 										Desconto
Promoção 		4 Valor de venda maior que R$50,00 				5 %

Escreva um programa que leia o valor de custo de um produto e seu tipo. Através das
informações acima, calcule e imprima o valor total do produto e a promoção que ele se
enquadrou. Caso o produto não se enquadre nas promoções acima, imprima “Promoção 0”.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
    float valor,custo,total;
    int tipo;

    printf("Digitar valor de custo: ");
    scanf("%f", &custo);

    printf("Digitar tipo de produto (1-Perecivel / 2 - Não Perecível): ");
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
            printf("Promoçao 0 - Valor: %.2f\n", valor);
        }
    }


    return 0;
}
