/*
strcmp(string1, string2) � Compara as duas strings. Se forem iguais, retorna zero.
Se a string1 for maior que a string2, retorna um n�mero maior que zero.
Se a string2 for maior que a string1, retorna um n�mero menor que zero.
Nesta fun��o, �maior que� e �menor que� referem-se � ordem alfab�tica.
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

