/*
strcmp(string1, string2) – Compara as duas strings. Se forem iguais, retorna zero.
Se a string1 for maior que a string2, retorna um número maior que zero.
Se a string2 for maior que a string1, retorna um número menor que zero.
Nesta função, “maior que” e “menor que” referem-se à ordem alfabética.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"");

    char nome1[100], nome2[100];

    printf("Informe o primeiro nome: ");
    gets(nome1);

    printf("Informe o segundo nome: ");
    gets(nome2);

    if (strcmp(nome1,nome2)==0)
    {
        printf("Igual");
    }
    else
    {
        printf("Diferente");
    }



    return 0;
}

