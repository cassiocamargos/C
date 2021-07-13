/*
1- Faça um programa que utilize uma função chamada subtracao, esta função deve receber 2
números inteiros e retornar o resultado da subtração dos números passados. O programa
principal deve exibir o resultado da função.
*/

#include <stdio.h>
#include <locale.h>

int subtracao(int x, int y)
{
    int z;
    z = x - y;
    return z;
}

int main()
{
    setlocale(LC_ALL, "");

    int a, b, c;

    printf("Entre com o primeiro valor: ");
    scanf("%i", &a);
    printf("Entre com o segundo valor: ");
    scanf("%i", &b);

    c = subtracao(a, b);

    printf("Resultado: %i\n", c);


    return 0;
}
