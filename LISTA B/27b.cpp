/*
27- Escreva um programa que pede para o usuário entrar um número correspondente a
um dia da semana e que então apresente na tela o nome do dia. Dica: Em C, utilize o
comando switch.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int dia;

    printf("Informe um número referente ao dia da semana: ");
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
            printf("Terça-feira");
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
            printf("Sábado");
            break;
        default:
            printf("Dia inválido!");
            break;
    }

    return 0;
}
