/*
3- Rescreva o programa do exerc�cio 1 da lista D e transforme em uma fun��o a parte que
exibe o nome de forma invertida. A fun��o deve receber o vetor com o texto informado pelo
usu�rio e exibir� este texto invertido, esta fun��o n�o possui retorno.
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
