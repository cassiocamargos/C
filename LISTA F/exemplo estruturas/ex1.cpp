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

void printpessoa(Pessoa x)
{
    printf("Nome: %s\n", x.nome);
    printf("Idade: %i\n", x.idade);
    printf("Peso: %f\n", x.peso);
    printf("Altura: %f\n", x.altura);
}

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

    Pessoa p1, p2;

    p1 = LerPessoa();
    getchar(); // limpar buffer

    printf("\n\nDados lidos\n");
    printpessoa(p1);


    p2 = LerPessoa();
    printf("\n\nDados lidos\n");
    printpessoa(p2);

    return 0;
}
