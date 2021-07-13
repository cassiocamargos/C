/*
4- Faça um programa que calcule a soma de N números quaisquer fornecidos pelo usuário . O va lo r d e N
deve ser também dado pelo usuário (sugere-se que N seja o primeiro valor fornecido).
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int n, total, c, valor;

    printf("Quantos números quer somar? ");
    scanf("%i", &n);

    total = 0; // inicializar o contador

    for(c=0;c<n;c++)
    {
        printf("Informe o número %i de %i: ", c+1, n);
        scanf("%i", &valor);

        total += valor; // acumular os n?meros informados
    }

    printf("A soma dos %i números informados foi: %i\n", c, total);

    return 0;
}
