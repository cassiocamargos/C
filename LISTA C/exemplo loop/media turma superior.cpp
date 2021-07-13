/* programa que calcular a média de notas de uma turma
com 30 alunos */

#include<stdio.h>
#include<locale.h>
#define QTD 30    // dá o nome QTD para a constante 30
int main()
{
    setlocale(LC_ALL,"");   // acentuação

    int c;                  // declarar variáveis
    float soma, media, nota;

    soma = 0;
    c = 0;

    while(c<QTD) {
        printf("Entre com a nota: ");
        scanf("%f", &nota);

        c = c + 1; // contar
        soma = soma + nota; // acumular

    }

    media = soma / QTD;
    printf("Média de notas da turma: %f\n", media);

    return 0;
}
