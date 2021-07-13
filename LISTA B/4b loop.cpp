/* 4- Dado um número inteiro qualquer, fornecido
pelo usuário, descobrir se o mesmo é par ou ímpar. */

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int num, resto; // declaração
    char resp;

    resp = 'S';

    while(resp=='S' || resp=='s')
    {
        printf("Entre com um número: ");
        scanf("%i", &num);

        resto = num % 2;
        if (resto==0) {
            printf("PAR\n");
        }
        else {
            printf("ÍMPAR\n");
        }

        getchar(); // limpar buffer (enter)
        printf("Deseja continuar? (S/N) ");
        scanf("%c", &resp);

    } // fim do loop

    return 0;
}
