/*
3- A tabuada de um determinado n�mero � uma tabela de produtos deste n�mero com os n�meros de 1 a 9.
Escreva um programa que pe�a um n�mero ao usu�rio e imprima a tabuada deste n�mero na tela. Caso o
valor dado seja inv�lido o programa deve apenas exibir uma mensagem de aviso. Escreva um programa
usando cada estrutura de repeti��o estudada.
*/

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int c, num, produto;

    printf("Entre com o n�mero que deseja calcular a tabuada: ");
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
