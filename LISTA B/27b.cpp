/*
27- Escreva um programa que pede para o usu�rio entrar um n�mero correspondente a
um dia da semana e que ent�o apresente na tela o nome do dia. Dica: Em C, utilize o
comando switch.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int dia;

    printf("Informe um n�mero referente ao dia da semana: ");
    scanf("%i", &dia);

    switch(dia)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Ter�a-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("S�bado");
            break;
        default:
            printf("Dia inv�lido!");
            break;
    }

    return 0;
}
