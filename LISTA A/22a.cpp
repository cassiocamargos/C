#include <stdio.h>
#include <locale.h>

//aluno: C�ssio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv) 
{ 

 //A imobili�ria Casa Feliz vende apenas terrenos retangulares. 
 //Fa�a um algoritmo para ler as dimens�es de um terreno e depois exibir a �rea do terreno.
setlocale(LC_ALL,"");
int area, comprimento, largura; 

printf ("Digite o comprimento do terreno em metros: ");
scanf ("%d", & comprimento);
printf ("Digite a largura do terreno em metros: ");
scanf ("%d", & largura);

area= largura*comprimento;

printf ("�rea do terreno em metros: %i ", area); 

	return 0;
}
