/*
LISTA C
9- O fatorial de um número inteiro positivo é o produto dele por todos os seus a ntecessores a té 1 ,
representa-se N!. Por definição o fatorial de 0! = 1 e o fatorial de 1! = 1!.
Exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120. Faça um programa que peça um número ao usuário e imprima o
fatorial deste número na tela.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int fat, num, c;

    // 5! = 5 * 4 * 3 * 2 * 1 = 120
    // 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720

    printf("Entre com um número que deseja calcular o fatorial: ");
    scanf("%i", &num);

    c = 2;
    fat = 1;
    while(c<=num)
    {
        fat = fat * c;
        c = c + 1;
    }

    printf("Fatorial: %i\n", fat);


    return 0;
}
