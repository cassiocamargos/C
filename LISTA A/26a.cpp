#include <stdio.h>
#include <locale.h>

/*
26-O restaurante a quilo Pan�a Nostra cobra R$ 25,00 por cada quilo de refei��o. Escreva um
programa que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assuma que a balan�a j� desconte o peso do prato.
*/

//aluno: C�ssio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv){ 
	setlocale(LC_ALL,"");
	
	float total, peso; 
	
	printf ("Digite o peso em quilos:");
	scanf ("%f", &peso);
	
	total=peso*25;
	
	printf ("O seu prato deu um valor total a pagar de: %.2f ", total); 

	return 0;
}
