#include <stdio.h>
#include <iostream>

//aluno: C�ssio Camargos Fernandes Silva
//RA: N6567B6

/*Escreva um programa em Portugu�s Estruturado capaz de calcular o pre�o total a ser pago
por uma compra de copos pl�sticos. O usu�rio deve fornecer o n�mero de copos a serem
comprados e o programa deve calcular o pre�o total a ser cobrado, exibindo-o. Observe que:
se o n�mero de copo � inferior a 101, o pre�o por copo � R$0.05; se o n�mero de copos
est� entre 101 e 500, o pre�o por copo � R$0.04; finalmente se o n�mero de copos �
superior a 500 o pre�o por copo � R$0.035.*/

int main(int argc, char** argv) {
	int copo;
	float preco;
	
	
	printf ("Digite a quantidade de copos: ");
	scanf("%i", &copo);

	
	if(copo<101){
		preco=copo*0.05;
		printf("preco: R$ %f \n",preco);
	} else
		
	
	if(copo>=101 && copo<=500){
		preco=copo*0.04;
		printf("preco: R$ %f \n",preco);
	}
	
	else {
		preco=copo*0.035;
		printf("preco: R$ %f \n",preco);
	}

return 0;
}
