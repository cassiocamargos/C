#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"");
	
	float n1, n2, resultado;
	int op;
	char resp;
	
	resp='s';
	
	while(resp=='S' || resp=='s')
    {
	
		printf ("Entre com o primeiro numero: ");
		scanf ("%f",&n1);
		printf ("Entre com o segundo numero: ");
		scanf ("%f",&n2);
		
		printf ("1) Somar\n");
		printf ("2) Subtrair\n");
		printf ("3) Multiplicar\n");
		printf ("4) Dividir\n");
		printf ("informe a operação desejada: ");
		scanf ("%i",&op);
		
		switch (op)
		{
			case 1:
				resultado = n1+n2;
				break;
			case 2:
				resultado = n1-n2;
				break;
			case3:
				resultado = n1*n2;
				break;
			case 4:
				resultado = n1/n2;
				break;
			default:
				printf ("\n\nOpção de operação invalida. \n\n");
				break;	
		}
		
		if (op>=1 && op<=4)
		{
			printf("\n\nResultado: %.2f\n\n", resultado);
		}
		
	getchar(); // limpar buffer (enter)
	
    printf("Deseja continuar? (S/N) ");
    scanf("%c", &resp);
    
    system ("cls");
    }
	
	return 0;
}
