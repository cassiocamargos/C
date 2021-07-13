/*
LISTA C
6- Calcule a média de N notas dos alunos de uma sala. O programa deve parar de
ler valores quando for fornecido um valor negativo como nota.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    float total, nota, media;
    int c;

    nota = 0;
    total = 0;
    c = 0;

    while(nota>=0)
    {
        printf("Informe a nota: ");
        scanf("%f", &nota);

        if (nota>=0)
        {
            total = total + nota;
            c = c + 1;
        }
    }

    media = total / c;
    printf("Média de notas da turma: %f\n", media);

    return 0;
}
