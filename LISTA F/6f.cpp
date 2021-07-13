/*
6- Considere um pequeno programa para controle de um estacionamento.
*/

#include<stdio.h>
#include<locale.h>
#define TAM 50

/*
a) Escreva uma estrutura para armazenar os dados de uma entrada. Ela deve ser capaz de
armazenar a placa do carro (8 caracteres), a marca (15 caracteres) e a hora de entrada
(5 caracteres). Dê a ela o nome de entrada.
*/
typedef struct
{
    char placa_carro[9];
    char marca[16];
    char hora_entrada[6];
} entrada;

/*
c) Escreva uma função chamada ObterDadosDaVaga. Esta função deve obter os dados de
uma entrada (estrutura definida no item a) e retornar uma variável do tipo entrada
contendo os dados informados.
*/
entrada ObterDadosDaVaga()
{
    entrada e;

    printf("Entre com a placa do carro: ");
    scanf("%s", e.placa_carro);

    printf("Entre com a marca do carro: ");
    scanf("%s", e.marca);

    printf("Informe a hora de entrada: ");
    scanf("%s", e.hora_entrada);

    return e;
}

int main()
{
    setlocale(LC_ALL,"");
    int i;

    // b) Escreva uma instrução que defina uma matriz do tipo entrada chamada vagas, com 50 linhas.
    entrada vagas[TAM];

    /* d) Escreva um programa que utilize a estrutura entrada, o vetor vagas e a função
    ObterDadosDaVaga para preencher toda a matriz (os dados devem ser informados pelo
    usuário). */
    for(i=0;i<TAM;i++)
    {
        printf("Entre com a vaga %i de %i.\n", i+1, TAM);
        vagas[i] = ObterDadosDaVaga();
    }


    return 0;
}
