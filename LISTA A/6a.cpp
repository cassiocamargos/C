#include <stdio.h>
#include <iostream>

//aluno: Cássio Camargos Fernandes Silva
//RA: N6567B6

int main(int argc, char** argv) 
{ 
//Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro. 
//Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média. 
//Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. 
//Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. 
//O programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros utilizada na viagem. 
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
