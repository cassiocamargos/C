#include <stdio.h>
#include <iostream>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

/*Escreva um programa em Português Estruturado capaz de calcular o preço total a ser pago
por uma compra de copos plásticos. O usuário deve fornecer o número de copos a serem
comprados e o programa deve calcular o preço total a ser cobrado, exibindo-o. Observe que:
se o número de copo é inferior a 101, o preço por copo é R$0.05; se o número de copos
está entre 101 e 500, o preço por copo é R$0.04; finalmente se o número de copos é
superior a 500 o preço por copo é R$0.035.*/

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
