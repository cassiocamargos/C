/*2- Leia um n�mero qualquer fornecido pelo usu�rio. Determine se o n�mero � maior
do que 100, imprimindo uma mensagem indicando que o "valor � maior que 100" ou uma
mensagem indicando que o "valor � menor ou igual a 100".*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	int num;

    printf("Entre com um numero: ");
    scanf("%i", &num);

    if(num>100)
    {
        // verdadeiro (S)
        printf("Valor maior que 100");
    }
	else
    {
        // falso (N)
        printf("Valor menor ou igual a 100");
    }
    
    return 0;
}
