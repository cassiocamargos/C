/*
4- Fa�a um programa que calcule a soma de N n�meros quaisquer fornecidos pelo usu�rio . O va lo r d e N
deve ser tamb�m dado pelo usu�rio (sugere-se que N seja o primeiro valor fornecido).
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int n, total, c, valor;

    printf("Quantos n�meros quer somar? ");
    scanf("%i", &n);

    total = 0; // inicializar o contador

    for(c=0;c<n;c++)
    {
        printf("Informe o n�mero %i de %i: ", c+1, n);
        scanf("%i", &valor);

        total += valor; // acumular os n?meros informados
    }

    printf("A soma dos %i n�meros informados foi: %i\n", c, total);

    return 0;
}
