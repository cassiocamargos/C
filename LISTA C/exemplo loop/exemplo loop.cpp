#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int c; // declaração
    int nota;

    c = 0; // inicialização

    do
    {
        printf("Entre com uma nota: ");
        scanf("%i", &nota);

        c = c + 1; // contador

    } while (c<5); // condição de sada

    return 0;
}
