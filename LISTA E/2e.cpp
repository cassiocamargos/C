/*
2- Elabore um programa que leia dois n�meros reais do usu�rio e o tipo de opera��o desejada
para estes n�meros, conforme tabela abaixo. Feito isso o programa deve utilizar uma fun��o
chamada calcular, que possuir� 3 par�metros, os dois primeiros s�o n�meros reais e o �ltimo
� o tipo de opera��o desejada, a fun��o deve retornar o resultado do c�lculo escolhido. O
programa principal deve exibir o resultado da fun��o.

Op��o   Tipos de opera��o
1       Soma
2       Subtra��o
3       Multiplica��o
4       Divis�o
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
    printf("Entre com a op��o de c�lculo: ");
}

int main()
{
    setlocale(LC_ALL, "");

    float n1, n2;
    int opcao;

    printf("Entre com o primeiro n�mero: ");
    scanf("%f", &n1);

    printf("Entre com o segundo n�mero: ");
    scanf("%f", &n2);

    mostrarmenu();
    scanf("%i", &opcao);

    printf("Resultado: %.2f\n", calcular(n1, n2, opcao));

    return 0;
}

