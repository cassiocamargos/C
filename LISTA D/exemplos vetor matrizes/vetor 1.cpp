#include<stdio.h>
int main()
{
    // declarar vetor
    int valores[10];
    int c;

    for(c=0;c<10;c++)
    {
        printf("Entre com um valor para o vetor: ");
        scanf("%i", &valores[c]);
    }

    // exibir na ordem inversa da leitura
    for(c=9;c>=0;c--)
    {
        printf("%i = %i\n", c, valores[c]);
    }

    return 0;
}
