#include <stdio.h>
#include <locale.h>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv) 
{ 

 //A imobiliária Casa Feliz vende apenas terrenos retangulares. 
 //Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
setlocale(LC_ALL,"");
int area, comprimento, largura; 

printf ("Digite o comprimento do terreno em metros: ");
scanf ("%d", & comprimento);
printf ("Digite a largura do terreno em metros: ");
scanf ("%d", & largura);

area= largura*comprimento;

printf ("Área do terreno em metros: %i ", area); 

	return 0;
}
