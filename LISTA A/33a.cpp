/*
Lista A
33- Toinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um programa para ler a quantidade de cada tipo de moeda, e imprimir o valor
total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e
ainda moedas de 1 real.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int qtd1c, qtd5c, qtd10c, qtd25c, qtd50c, qtd1r;
    float total;

    printf("Quantidade de moedas de 1 centavo: ");
    scanf("%i", &qtd1c);

    printf("Quantidade de moedas de 5 centavos: ");
    scanf("%i", &qtd5c);

    printf("Quantidade de moedas de 10 centavos: ");
    scanf("%i", &qtd10c);

    printf("Quantidade de moedas de 25 centavos: ");
    scanf("%i", &qtd25c);

    printf("Quantidade de moedas de 50 centavos: ");
    scanf("%i", &qtd50c);

    printf("Quantidade de moedas de 1 real: ");
    scanf("%i", &qtd1r);

    total = (qtd1c + qtd5c*5 + qtd10c*10 + qtd25c*25 + qtd50c*50 + qtd1r*100) / 100.0;

    printf("Total do cofrinho: R$ %.2f\n", total);

    return 0;
}
