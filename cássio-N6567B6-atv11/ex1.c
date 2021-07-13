#include <stdio.h>
#include <locale.h>
#include "structno.c"
#include "funpilha.c"

/*
Escreva um programa que leia n�meros inteiros informados pelo usu�rio e guarde em uma lista ligada.
O programa deve parar de ler os n�meros quando o usu�rio informar um valor negativo. 
Em seguida, exiba os valores na ordem inversa da informada pelo usu�rio.

C�SSIO CAMARGOS FERNANDES SILVA
RA: N6567B6
*/

int main()
{
    setlocale(LC_ALL,"");
	int numero=0, total = 0, c = 0;
	no *pilha = NULL;
	
	while(numero>=0)
	{
        printf("Entre com o  numero: ");
        scanf("%i", &numero);
        if (numero>=0)
        {
            empilhar(&pilha, numero);
        }
	}

    while((numero=desempilhar(&pilha))!=NULL)
	{
     	   
        printf("numero: %i\n", numero);
        c++;
	}

    return 0;
}
