/*
1- Escreva um programa que leia um texto com 10 letras e
exiba este texto em ordem invertida na tela.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"");

    char texto[11];
    int i, tam;

    printf("Entre com um texto de até 10 letras: ");
    gets(texto);

    // calcula a posição da última
    // letra digitada pelo usuário
    tam = strlen(texto) - 1;

    for(i=tam;i>=0;i--)
    {
        printf("%c", texto[i]);
    }

    return 0;
}
