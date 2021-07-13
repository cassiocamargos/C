
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int idade;
    float nota;
    char nome[101];
    int totalid = 0, cp = 0;

    FILE* arq;

    // abre um arquivo para ser trabalhado
    // "r" - abre para leitura
    arq = fopen("dados.txt", "r");

    // feof() - retorna verdadeiro se for o fim do arquivo

    while(!feof(arq))
    {
        fscanf(arq, "%i %f %s\n", &idade, &nota, nome);

        printf("Nome: %s\n", nome);
        printf("Idade: %i\n", idade);
        printf("Nota: %f\n", nota);

        totalid += idade;
        cp++;
    }

    printf("Média de idade: %i\n", totalid/cp);


    // fechar um arquivo
    fclose(arq);


    return 0;
}



