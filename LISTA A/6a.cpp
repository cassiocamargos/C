#include <stdio.h>
#include <iostream>

//aluno: C�ssio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv) 
{ 
//Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que faz 12 Km por litro. 
//Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia. 
//Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE. 
//Tendo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS = DISTANCIA / 12. 
//O programa deve apresentar os valores da velocidade m�dia, tempo gasto, a dist�ncia percorrida e a quantidade de litros utilizada na viagem. 
//Dica: trabalhe com valores reais. 

int tempo, velocidade, distancia, litros_gastos; 

printf ("Digite o tempo gasto na viagem em horas: ");
scanf ("%d", &tempo);
printf ("Digite a velocidade media da viagem em km/h: ");
scanf ("%d", &velocidade);

distancia = tempo * velocidade;
litros_gastos = distancia / 12;

printf ("A quantidade de litro gasto na viagem e de: %i ", litros_gastos ); 

	return 0;
}
