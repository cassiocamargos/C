

void imprimirlinhas(int qtd)
{
    int i;
    for(i=0;i<qtd;i++) {
        printf("Linha %i\n", i+1);
    }
}

// fun��o do tipo void, n�o possui retorno
void imprimirlinha(char valor[]) {
    printf("%s\n", valor);
}

void repetirtexto(char texto[], int qtd) {
    int i;
    for(i=0;i<qtd;i++)
    {
        imprimirlinha(texto);
    }
}



#include<stdio.h>
#include<locale.h>
int main() // fun��o principal
{
    setlocale(LC_ALL, "");

    printf("Antes da fun��o\n");

    repetirtexto("CESAR", 10);

    printf("Depois da fun��o\n");

    return 0;
}
