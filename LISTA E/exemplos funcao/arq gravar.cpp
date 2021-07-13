
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int idade;
    float nota;
    char nome[101];

    FILE* arq;

    // abre um arquivo para ser trabalhado
    // "w" - abre para escrita (sobrescreve o que já tem)
    // "a+" - abre para adicionar
    arq = fopen("dados.txt", "a+");

    printf("Entre com seu nome: ");
    scanf("%s", nome);

    printf("Entre com sua idade: ");
    scanf("%i", &idade);

    printf("Entre com sua nota: ");
    scanf("%f", &nota);

    fprintf(arq, "%i %f %s\n", idade, nota, nome);


    // fechar um arquivo
    fclose(arq);


    return 0;
}



