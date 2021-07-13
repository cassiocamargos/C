/*7- Elabore um programa que leia o RA e a nota de uma turma hipotética de 15 alunos. Feita a
leitura dos 15 RAs e notas, pergunte ao usuário um RA que ele deseja saber a nota, com esta
informação, procure a nota informada e exiba ao usuário.
Dica: Utilize um vetor para guardar os RAs e um vetor para guardar as notas. Quando for pesquisar
o RA informado pelo usuário, a nota estará na mesma posição do RA encontrado.
*/

#include<stdio.h>
#include<locale.h>
#define QTD 3
int main()
{
    setlocale(LC_ALL, "");
    int ras[QTD], i, rapesq;
    float notas[QTD];

    // ler todas as notas e RAs
    for(i=0;i<QTD;i++)
    {
        printf("Entre com o RA do aluno %i de %i: ", i+1, QTD);
        scanf("%i", &ras[i]);

        printf("Entre com a nota do aluno %i de %i: ", i+1, QTD);
        scanf("%f", &notas[i]);
    }

    // perguntar um RA
    printf("Entre com o RA que você deseja saber a nota: ");
    scanf("%i", &rapesq);

    // mostrar a nota do RA lido
    for(i=0;i<QTD;i++)
    {
        if (ras[i]==rapesq)
        {
            printf("Nota do RA %i informado é: %f\n", rapesq, notas[i]);
        }
    }

    return 0;
}
