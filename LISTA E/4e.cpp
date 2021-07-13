/*
LISTAE
4- Rescreva o programa do exercício 2 da lista D e transforme em uma função a parte que faz
a somatória dos valores informados pelo usuário. A função deve receber um vetor e retornar a
soma dos números contidos nele. O programa principal deve exibir o resultado da função.

LISTA D
2- Elabore um programa que leia 7 números e os guarde em um vetor. Depois leia os valores
digitados e mostre a soma total.
*/

#include<stdio.h>
#include<locale.h>
#include "funcoes.c"
#define TAM 7


int main() {
    setlocale(LC_ALL, "");

    int i;
    float numeros[TAM];

    // leitura de todos os números
    for(i=0;i<TAM;i++) {
        printf("Entre com o número %i de %i: ", i+1, TAM);
        scanf("%f", &numeros[i]);
    }

    printf("Somatória total: %.2f\n", somatoria(numeros, TAM));

    return 0;
}
