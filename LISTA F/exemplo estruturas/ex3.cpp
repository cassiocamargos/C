#include<stdio.h>
#include<locale.h>
#define TAM 3

// declarar um NOVO tipo de dado
typedef struct
{
    // membros da estrutura (4)
    int idade;
    float peso, altura;
    char nome[101];
} Pessoa;

float CalcularMediaPeso(Pessoa v[], int n)
{
    float apeso = 0;
    int c;
    for(c=0;c<n;c++)
    {
        apeso += v[c].peso; // apeso = apeso + v[c].peso;
    }
    return apeso / n;
}


int main()
{
    setlocale(LC_ALL, "");

    int i;
    Pessoa turma[TAM];

    for(i=0;i<TAM;i++)
    {
        printf("Aluno %i de %i\n\n", i+1, TAM);

        printf("Entre com o nome: ");
        gets(turma[i].nome);

        printf("Entre com a idade: ");
        scanf("%i", &turma[i].idade);

        printf("Entre com o peso: ");
        scanf("%f", &turma[i].peso);

        printf("Entre com a altura: ");
        scanf("%f", &turma[i].altura);

        getchar(); // limpar o buffer

        printf("\n");
    }

    printf("Média de peso da turma: %f\n", CalcularMediaPeso(turma, TAM));

    return 0;
}

