/*
Escreva um programa que leia um número inteiro e faça a conversão deste número para binário. 
Guarde cada dígito binário em uma pilha e em seguida exiba os valores armazenados nesta pilha. 
Atente-se que, pela característica da pilha, ao desempilhar os elementos, 
o número binário será apresentado na ordem correta.

CÁSSIO CAMARGOS FERNANDES SILVA
RA: N6567B6
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <locale.h>
#include <string.h>

#define esc 27

void limpatela(){
    system("CLS");
}

typedef struct no
{
	int valor;
	char bin[10];
	struct no *proximo;
} no;

void empilhar(no **topo, int numero)
{
	no *novoNo;

	// reserva memoria para o novo n?
	novoNo = (no *) malloc(sizeof(no));

	// guarda a informaçao no novo nó
	novoNo->valor = numero;

	// aponta o novo nó para o antigo nó raiz
	novoNo->proximo = *topo;

	// muda o endereço do raiz para o novo nó
	*topo = novoNo;
}


int desempilhar(no **topo)
{
	int valorTopo;
	no *novoTopo;
	
	// se a pilha esta vazia, retorna NULL
	if (*topo==NULL) return NULL;
	
	// guarda o valor do topo
	valorTopo = (*topo)->valor;
	
	// guarda o endereço do segundo nó
	novoTopo = (*topo)->proximo;
	
	// libera memória do nó no topo
	free(*topo);
	
	// muda o topo para o segundo nó
	*topo = novoTopo;
	
	// retorna o valor que estava no topo
	return valorTopo;
}

int main(){
	
	setlocale(LC_ALL,"");
	
	int a;
	char b[10], c;
	
	int valor;
	no *topo = NULL;
	
	do{
	
	limpatela();	
	printf("Digite um numero: ");

	scanf("%d",&a);
	
	if (a < 0) {
		break;
	}
		
	itoa(a,b,2); //Converte para base binaria

	printf("\nO numero %d em binario é: %s\n",a,b);
	printf("Precione ESC para sair, Enter para continuar\n");
	
	empilhar(&topo, atoi(b)); // converte b para inteiro
	
	c = getch();
	
	
	}while(c != 27);
	
	printf("\n\n|================================================|\n");
	printf("\t\tValores da pilha:\n");
	printf("|================================================|\n");
	while((valor=desempilhar(&topo))!=NULL)
	{
		printf(" %d ", valor);

	}
	
	
	return 0;
	
}
