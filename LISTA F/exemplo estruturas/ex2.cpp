#include<stdio.h>
#include<locale.h>

// declarar um NOVO tipo de dado
typedef struct
{
    // membros da estrutura (4)
    int idade;
    float peso, altura;
    char nome[101];
} Pessoa;

Pessoa LerPessoa()
{
    Pessoa temp;

    printf("Entre com o nome: ");
    gets(temp.nome);

    printf("Entre com a idade: ");
    scanf("%i", &temp.idade);

    printf("Entre com o peso: ");
    scanf("%f", &temp.peso);

    printf("Entre com a altura: ");
    scanf("%f", &temp.altura);

    return temp;
}

int main()
{
    setlocale(LC_ALL, "");

    Pessoa casal[2];

    casal[0] = LerPessoa();
    getchar(); // limpar o buffer

    casal[1] = LerPessoa();

    return 0;
}

