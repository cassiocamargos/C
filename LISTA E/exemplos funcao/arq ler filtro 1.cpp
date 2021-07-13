
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int idade;
    float nota;
    char nome[101];
    float notamin;

    FILE* arq;

    printf("Entre com a nota mínima que deseja consultar: ");
    scanf("%f", &notamin);

    // abre um arquivo para ser trabalhado
    // "r" - abre para leitura
    arq = fopen("dados.txt", "r");

    // feof() - retorna verdadeiro se for o fim do arquivo
    while(!feof(arq))
    {

        fscanf(arq, "%i %f %s\n", &idade, &nota, nome);
        if (nota>=notamin)
        {
            printf("Nome: %s\n", nome);
            printf("Idade: %i\n", idade);
            printf("Nota: %f\n\n", nota);
        }
    }


    // fechar um arquivo
    fclose(arq);


    return 0;
}



