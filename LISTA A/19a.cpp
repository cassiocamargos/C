#include <stdio.h>
#include <locale.h>

/*
19- Faça um programa que leia o tempo de duração de um evento em uma fábrica expressa
em segundos e mostre-o expresso em horas, minutos e segundos.
*/
//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv){ 
	setlocale(LC_ALL,"");

	int horas, minutos, segundos, seg; 
	
	printf ("Digite a duração do evento em segundos:");
	scanf ("%i", &segundos);
	
	horas = segundos / 3600;
  	segundos = segundos % 3600 ;
  	minutos = segundos / 60;
  	seg = segundos % 60 ;
	
	printf("O tempo do evento é de %i horas %i minutos e %i segundos" ,horas,minutos,seg);

	return 0;
}
