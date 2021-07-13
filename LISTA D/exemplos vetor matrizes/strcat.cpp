/*
Exemplo de uso: strcat (string_destino, string_origem)

Concatena (junta) as duas strings, acrescentando o texto da string de origem no final da string de destino.

*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"");

    char nome[100] = "CESAR";
    char sobrenome[50] = "TOFANINI";


    printf("ANTES\n");
    printf("Nome: %s\nSobrenome: %s\n\n", nome, sobrenome);

    // nome = nome + " "
    strcat(nome, " ");

    // nome = nome + sobrenome
    strcat(nome, sobrenome);

    printf("DEPOIS\n");
    printf("Nome: %s\nSobrenome: %s\n\n", nome, sobrenome);

    return 0;
}
