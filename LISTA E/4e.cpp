/*
LISTAE
4- Rescreva o programa do exerc�cio 2 da lista D e transforme em uma fun��o a parte que faz
a somat�ria dos valores informados pelo usu�rio. A fun��o deve receber um vetor e retornar a
soma dos n�meros contidos nele. O programa principal deve exibir o resultado da fun��o.

LISTA D
2- Elabore um programa que leia 7 n�meros e os guarde em um vetor. Depois leia os valores
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

    // leitura de todos os n�meros
    for(i=0;i<TAM;i++) {
        printf("Entre com o n�mero %i de %i: ", i+1, TAM);
        scanf("%f", &numeros[i]);
    }

    printf("Somat�ria total: %.2f\n", somatoria(numeros, TAM));

    return 0;
}
