
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int idade;
    float nota;
    char nome[101];
    char nomepesq[101];

    FILE* arq;

    printf("Entre com o nome que deseja consultar: ");
    scanf("%s", &nomepesq);

    // abre um arquivo para ser trabalhado
    // "r" - abre para leitura
    arq = fopen("dados.txt", "r");

    // feof() - retorna verdadeiro se for o fim do arquivo
    while(!feof(arq))
    {

        fscanf(arq, "%i %f %s\n", &idade, &nota, nome);
        if (strcmp(nome,nomepesq)==0)
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



