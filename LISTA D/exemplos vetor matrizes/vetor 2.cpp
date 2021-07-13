#include<stdio.h>
int main()
{
    // declarando um vetor de float
    float notas[5];

    // inicializando o vetor
    notas[0] = 5;
    notas[2] = 7.5;

    // declarando e inicializando um vetor com valores constantes
    float pesos[] = {70.5, 100, 45.4, 50};

    printf("notas[2] = %f\n", notas[2]);
    printf("pesos[0] = %f\n", pesos[0]);

    printf("Informe uma nota: ");
    scanf("%f", &notas[2]);

    printf("notas[2] = %f\n", notas[2]);
    printf("pesos[0] = %f\n", pesos[0]);


    return 0;
}

