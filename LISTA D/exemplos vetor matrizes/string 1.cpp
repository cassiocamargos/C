#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    char nome[100];

    // leitura de uma string (texto)
    /*
    printf("Entre com seu nome: ");
    scanf("%s", nome);

    printf("Nome informado: |%s|\n", nome);

    */

    printf("Entre com seu nome: ");
    gets(nome);
    puts("Nome informado: ");
    puts(nome);

    return 0;
}
