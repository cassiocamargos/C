#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int c; // declara��o
    int nota;

    c = 0; // inicializa��o

    do
    {
        printf("Entre com uma nota: ");
        scanf("%i", &nota);

        c = c + 1; // contador

    } while (c<5); // condi��o de sada

    return 0;
}
