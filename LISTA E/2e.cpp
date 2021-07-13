/*
2- Elabore um programa que leia dois números reais do usuário e o tipo de operação desejada
para estes números, conforme tabela abaixo. Feito isso o programa deve utilizar uma função
chamada calcular, que possuirá 3 parâmetros, os dois primeiros são números reais e o último
é o tipo de operação desejada, a função deve retornar o resultado do cálculo escolhido. O
programa principal deve exibir o resultado da função.

Opção   Tipos de operação
1       Soma
2       Subtração
3       Multiplicação
4       Divisão
*/

#include<stdio.h>
#include<locale.h>

float calcular(float a, float b, int opcao)
{
    switch(opcao)
    {
        case 1:
            return a+b;
            break;
        case 2:
            return a-b;
            break;
        case 3:
            return a*b;
            break;
        default:
            return a/b;
            break;
    }
}

void mostrarmenu()
{
    printf("1) Somar\n");
    printf("2) Subtrair\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("Entre com a opção de cálculo: ");
}

int main()
{
    setlocale(LC_ALL, "");

    float n1, n2;
    int opcao;

    printf("Entre com o primeiro número: ");
    scanf("%f", &n1);

    printf("Entre com o segundo número: ");
    scanf("%f", &n2);

    mostrarmenu();
    scanf("%i", &opcao);

    printf("Resultado: %.2f\n", calcular(n1, n2, opcao));

    return 0;
}

