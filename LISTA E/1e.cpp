/*
1- Fa�a um programa que utilize uma fun��o chamada subtracao, esta fun��o deve receber 2
n�meros inteiros e retornar o resultado da subtra��o dos n�meros passados. O programa
principal deve exibir o resultado da fun��o.
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
