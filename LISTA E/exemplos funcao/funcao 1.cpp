

void imprimirlinhas(int qtd)
{
    int i;
    for(i=0;i<qtd;i++) {
        printf("Linha %i\n", i+1);
    }
}

// função do tipo void, não possui retorno
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
int main() // função principal
{
    setlocale(LC_ALL, "");

    printf("Antes da função\n");

    repetirtexto("CESAR", 10);

    printf("Depois da função\n");

    return 0;
}
