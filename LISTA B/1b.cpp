/*1- Leia um n�mero qualquer fornecido pelo usu�rio. Determine
se o n�mero � maior do que 50, imprimindo uma mensagem indicando tal fato.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	int n;

    printf("Entre com um numero: ");
    scanf("%i", &n); // leitura de dados - (posso usar o %i OU %d no caso de inteiros)

    if(n>50)
    {
        // verdadeiro (S)
        printf("Numero e maior que 50");
    }
	return 0;
}
