/*
1- Escreva um programa que leia um texto com 10 letras e
exiba este texto em ordem invertida na tela.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    char texto[11];
    int i;

    printf("Entre com um texto de até 10 letras: ");
    gets(texto);

    for(i=10;i>=0;i--)
    {
        printf("%c", texto[i]);
    }

    return 0;
}
