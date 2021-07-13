/*
3- A tabuada de um determinado número é uma tabela de produtos deste número com os números de 1 a 9.
Escreva um programa que peça um número ao usuário e imprima a tabuada deste número na tela. Caso o
valor dado seja inválido o programa deve apenas exibir uma mensagem de aviso. Escreva um programa
usando cada estrutura de repetição estudada.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int c, num, produto;

    printf("Entre com o número que deseja calcular a tabuada: ");
    scanf("%i", &num);

    //c = 1;
    //while(c<=10)
    for(c=1;c<=10;c++)
    {
        produto = num * c;
        printf("%i x %i = %i\n", num, c, produto);
        //c = c + 1;
    }

    return 0;
}
