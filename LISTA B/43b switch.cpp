#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*Cássio Camargos Fernandes Silva - NA: N6567B6

 43- Faça um programa que mostre um menu com as seguintes opções: 1. soma; 2.
multiplicação; 3. raiz quadrada; 4. finalizar. O programa deve receber a opção desejada,
receber os dados necessários para o processamento de cada opção, realizar a operação e
imprimir o resultado. Na opção finalizar, nada deve acontecer. */


int main(int argc, char *argv[])
{
	float n1, n2, resultado;
	int op;
	
	printf ("1) somar\n");
	printf ("2) multiplicar\n");
	printf ("3) raiz quadrada\n");
	printf ("4) finalizar\n");
	printf ("informe a operacao desejada: ");
	scanf ("%i", &op);
	
	switch (op)
	{
		case 1:
			printf ("entre com o primeiro numero: ");
			scanf ("%f",&n1);
			printf ("entre com o segundo numero: ");
			scanf ("%f",&n2);
			resultado = n1+n2;
			break;
		case 2:
			printf ("entre com o primeiro numero: ");
			scanf ("%f",&n1);
			printf ("entre com o segundo numero: ");
			scanf ("%f",&n2);
			resultado = n1*n2;
			break;
		case 3:
			printf ("entre com um numero: ");
			scanf ("%f",&n1);
			resultado = sqrt(n1);
			break;
		case 4:
			break;
		default:
			printf ("\n\nopcao de operacao invalida. \n\n");
			break;	
	}
	
	if (op>=1 && op<=3)
	{
		printf("\n\nresultado: %.2f\n\n", resultado);
	}
	
return 0;
}
