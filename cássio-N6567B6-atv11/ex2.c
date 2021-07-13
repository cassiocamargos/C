/*
Escreva um programa que leia números inteiros informados pelo usuário e guarda em duas filas:

Lista 1 - Com números negativos. O programa deve parar de ler os números quando o usuário informar um valor positivo ou zero. 
Lista 2 - Com números positivos. O programa deve parar de ler os números quando o usuário informar um valor negativos ou zero.
Depois da leitura das duas filas, crie uma terceira fila, contendo uma junção dos elementos da lista 1 e 2, 
alternando seus elementos, ou seja, enfileirando um elemento da lista 1,
depois um elemento da lista 2, depois um da lista 1, depois um da lista 2, e assim, sucessivamente.

Em seguida, exiba os valores da lista 3.

CÁSSIO CAMARGOS FERNANDES SILVA 
RA: N6567B6

*/

#include <stdio.h>
#include "structno.c"
#include "funfila.c"

int main()
{
	int valor1=-1, valor2=-1, valor3,numeroneg=-1, numeropos=1,vez=1;
	no *lista1 = NULL;
	no *lista2 = NULL;
	no *lista3 = NULL;
	
	printf("Aperte 0 para parar\n");
	while(numeroneg<0)
	{
		
		printf("Entre com os  numero negativos: ");
        scanf("%i", &numeroneg);
        
        if(numeroneg<0)
        {
        enfileirar(&lista1, numeroneg);
    	}
	}
	
	printf("Aperte 0 para parar\n");
		
		while(numeropos>0)
	{
		printf("Entre com os  numeros positivos: ");
        scanf("%i", &numeropos);
        
        if(numeropos>0)
        {
        enfileirar(&lista2, numeropos);
    	}
    
	}
	

    while(valor1!=NULL || valor2!=NULL)
    {
        if (vez==1)
        {
            valor1 = desenfileirar(&lista1);

            if (valor1!=NULL)
                enfileirar(&lista3, valor1);

            vez = 2;
        }
        else
        {
            valor2 = desenfileirar(&lista2);

            if (valor2!=NULL)
                enfileirar(&lista3, valor2);

            vez = 1;
        }
    }

    while((valor3=desenfileirar(&lista3))!=NULL)
	{
        printf("%i\n", valor3);
	}

	
		

	getch();
	return 0;
}
