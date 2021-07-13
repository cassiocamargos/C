/*
8- Uma das primeiras aplicacoes de computadores foi o calculo de trajetoria de projeteis. 
Se um projetil e atirado com uma velocidade inicial V (em m/s) a um angulo de inclinacao Q (onde 0 < Q < 90o ), 
sua posicao no plano vertical (x, y) no tempo t (segundos) e calculada pelas formulas que seguem. 
Faca um algoritmo que dados os parametros Q e V liste as coordenadas x e y em intervalos de 0.01 segundos para um tiro em particular, 
terminando a listagem quando o projetil atingir o solo (isto e, quando y = 0).

	x = V * cos(Q)* t
	y = V * cos(Q)* t - (g*t2)/2
	g = 9.8 m/s2 (aceleracao da gravidade)
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

	int i;
	float x, y=1, t = 0.01, vel, angl;

	printf("informe a velocidade do tiro:");
	scanf("%f",&vel);

	printf("informe angulo de declinio do tiro:");
	scanf("%f",&angl);

    while(y>0)
    {
        x = vel * cos(angl) * t;
        y = vel * cos(angl) * t - (9.8*(t*t))/2;
        printf("X = %f, ",x);
        printf("Y = %f\n",y);
        t = t + 0.01;
    }


	return 0 ;
}
