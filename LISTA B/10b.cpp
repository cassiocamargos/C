/*
10- Para um aviador ingressar em um determinado curso de pilotagem, ele precisa
satisfazer as seguintes condições: Altura mínima 1.70m; Idade entre 21 e 35 anos, inclusive;
Peso entre 60kg e 95kg. Escreva um programa que leia os dados do candidato e informe se ele
está apto ou não para se inscrever no curso.


    3 operadores lógicos

        Diag. Blocos            C/C++
        .E.             AND     &&
        .OU.            OR      ||
        .NÃO.           NOT     !
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	int id;
    float ps, al;

    printf("Informe sua idade: ");
    scanf("%i", &id);

    printf("Informe seu peso: ");
    scanf("%f", &ps);

    printf("Informe sua altura: ");
    scanf("%f", &al);

    if(al>=1.7 && id>=21 && id<=35 && ps>60 && ps<90)
    {
        // verdadeiro
        printf("APTO!\n");
    }
    else
    {
        //falso
        printf("Inapto\n");
    }

    return 0;
}
