#include <iostream>


/*C�ssio Camargos Fernandes Silva - NA: N6567B6

 42- Criar um algoritmo que leia um n�mero inteiro entre 1 e 12 e escrever o m�s
correspondente. Caso o usu�rio digite um n�mero fora desse intervalo, dever� aparecer uma
mensagem informando que n�o existe m�s com este n�mero. */


int main(int argc, char** argv) {
	
	int mes;
 
	printf("Digite o numero do mes: ");
	scanf ("%i",&mes);
	printf("\n\n");

	switch(mes)
	{
		case 1:
			printf("Janeiro \n");
			break;
		case 2:
			printf("Fevereiro \n");
			break;
		case 3:
			printf("Mar�o \n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf ("Numero invalido!\n\n");
			break;
	}
	
return 0;
}
