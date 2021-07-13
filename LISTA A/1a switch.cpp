/*
1- Escreva um programa que leia dois n�mero reais. Em seguida apresente um menu
que permite ao usu�rio escolher entre as seguintes op��es: 1)Soma, 2) Subtra��o,
3) Multiplica��o e 4) Divis�o. No final, exiba o resultado da opera��o escolhida
usando os n�mero informados.
*/

int main()
{
    float n1, n2, resultado;
    int op;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &n1);
    printf("Entre com o segundo numero: ");
    scanf("%f", &n2);

    printf("1) Somar\n");
    printf("2) Subtrair\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("Informe a operacao desejada: ");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
            resultado = n1 + n2; // somar
            break;
        case 2:
            resultado = n1 - n2; // subtrair
            break;
        case 3:
            resultado = n1 * n2; // multiplicar
            break;
        case 4:
            resultado = n1 / n2; // dividir
            break;
        default:
            printf("\n\nOpcao de operacao invalida.\n\n");
            break;
    }

    if (op>=1 && op<=4)
    {
        printf("\n\nResultado: %.2f\n\n", resultado);
    }

    return 0;
}
