/* 4- Dado um n�mero inteiro qualquer, fornecido
pelo usu�rio, descobrir se o mesmo � par ou �mpar. */

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int num, resto; // declara��o
    char resp;

    resp = 'S';

    while(resp=='S' || resp=='s')
    {
        printf("Entre com um n�mero: ");
        scanf("%i", &num);

        resto = num % 2;
        if (resto==0) {
            printf("PAR\n");
        }
        else {
            printf("�MPAR\n");
        }

        getchar(); // limpar buffer (enter)
        printf("Deseja continuar? (S/N) ");
        scanf("%c", &resp);

    } // fim do loop

    return 0;
}
