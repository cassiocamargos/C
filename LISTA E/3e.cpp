/*
3- Rescreva o programa do exercício 1 da lista D e transforme em uma função a parte que
exibe o nome de forma invertida. A função deve receber o vetor com o texto informado pelo
usuário e exibirá este texto invertido, esta função não possui retorno.
*/

#include<stdio.h>
#include<locale.h>

void inverter(char texto[])
{
    int i;
    for(i=strlen(texto)-1;i>=0;i--)
    {
        printf("%c", texto[i]);
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "");

    char texto[101];

    printf("Entre com um texto: ");
    gets(texto);

    inverter(texto);

    return 0;
}
