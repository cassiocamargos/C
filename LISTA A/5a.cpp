#include<stdio.h>
#include<locale.h>
/*
5- O cardápio de uma lanchonete é dado pela tabela de preços abaixo. Escreva um programa
que leia a quantidade de cada item comprado por um determinado cliente e imprima o valor
total da sua compra.

Hambúrguer      R$ 8,00
Batata frita    R$ 12,00
Refrigerante    R$ 3,00
Cerveja         R$ 5,00
Doce            R$ 3,00
*/

int main()
{
    setlocale(LC_ALL,"");

    int qtdh, qtdb, qtdr, qtdc, qtdd;
    float total;

    printf("Quantos hamburgueres comeu? ");
    scanf("%i", &qtdh);
    printf("Quantas batatas fritas comeu? ");
    scanf("%i", &qtdb);
    printf("Quantos refrigerantes tomou? ");
    scanf("%i", &qtdr);
    printf("Quantas cervejas tomou? ");
    scanf("%i", &qtdc);
    printf("Quantos doces comeu? ");
    scanf("%i", &qtdd);

    total = qtdh*8.0 + qtdb*12.0 + qtdr * 3.0 + qtdc * 5.0 + qtdd * 3.0;

    printf("Valor total da conta: R$ %.2f\n", total);

    return 0;
}

