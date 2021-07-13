/*
Lista B
25- Escreva um programa que leia tr�s valores inteiros correspondentes ao dia, m�s e ano de
uma data, indicando qual o n�mero de dias transcorridos naquele ano e qual o n�mero de dias
restantes no ano. Exemplo para 15/01/2003 temos dias transcorridos = 15 e dias restantes =
350. O programa deve considerar que alguns anos s�o bissextos!
*/


#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int dia, mes, ano, diastranscorridos = 0, diasano = 365, diasrestantes;

    printf("Informe o dia: ");
    scanf("%i", &dia);

    printf("Informe o m�s: ");
    scanf("%i", &mes);

    printf("Informe o ano: ");
    scanf("%i", &ano);

     // se for um ano bissexto, mudo o total de dias para 366
    if (((ano%4)==0 && (ano%100)!=0) || (ano%400)==0)
    {
        diasano = 366;
    }

    if(mes>1)
    {
        diastranscorridos += 31;
    }

    if(mes>2)
    {
        if(diasano==365)
        {
            diastranscorridos += 28;
        }
        else
        {
            diastranscorridos += 29;
        }
    }

    if(mes>3)
    {
        diastranscorridos += 31;
    }

    if(mes>4)
    {
        diastranscorridos += 30;
    }

    if(mes>5)
    {
        diastranscorridos += 31;
    }

    if(mes>6)
    {
        diastranscorridos += 30;
    }

    if(mes>7)
    {
        diastranscorridos += 31;
    }

    if(mes>8)
    {
        diastranscorridos += 31;
    }

    if(mes>9)
    {
        diastranscorridos += 30;
    }

    if(mes>10)
    {
        diastranscorridos += 31;
    }

    if(mes>11)
    {
        diastranscorridos += 30;
    }

    // somar dias do mes informado
    diastranscorridos += dia;

    diasrestantes = diasano - diastranscorridos;

    printf("dias transcorridos = %i \ndias restantes = %i\n", diastranscorridos, diasrestantes);

    return 0;
}
