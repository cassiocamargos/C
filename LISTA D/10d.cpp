/*
10- Escreva um programa que solicite uma palavra qualquer do usu�rio e no final imprima quantas
vogais e quantas consoantes a palavra tem. Para simplificar, considere apenas palavras sem
acentua��o.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char texto[101];
    int i, cv = 0, cc = 0;

    // obter o texto do usu�rio
    printf("Informe um texto de at� 100 caracteres: ");
    gets(texto);

    // contar quantas vogais e quantas consoantes o texto possui
    for(i=0;i<strlen(texto);i++)
    {
        // verificar se � vogal
        if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u')
        {
            cv++; // se sim, conta como vogal
        }
        else
        {
            cc++; // sen�o, conta como consoante
        }

    }
    printf("Sua palavra possui %i vogais e %i consoantes.\n", cv, cc);

    return 0;
}
