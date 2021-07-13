/*
21- Em um programa de TV uma caixa contendo várias bolas é utilizada para realizar um jogo
com os participantes. A brincadeira consiste em retirar uma bola da caixa. Para cada
bola existe um código e uma pontuação associada, conforme a tabela abaixo. Elabore
um programa que leia a bola sorteada e mostre a pontuação obtida pelo participante da
brincadeira.
Código da bola 			Pontuação
'P' 					Ganha 10 pontos
'B' 					Ganha 15 pontos
'V' 					Não ganha nem perde
'A' 					Perde 15 pontos
'L' 					Perde 10 pontos 

CÁSSIO CAMARGOS FERNANDES SILVA
RA: N6567B6
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	char op;
	
	printf("escolha a letra da bola que deseja retirar da caixa: \n");
	printf("P-)\n");
	printf("B-)\n");
	printf("V-)\n");
	printf("A-)\n");
	printf("L-)\n");
	scanf("%c", &op);
	
		if(op=='p')
		{
			printf("Letra da Bola: P\nGanha 10 pontos!");
		}
		else
		{
			if(op=='b')
			{
				printf("Letra da Bola: B\nGanha 15 pontos!");
			}
			else
			{
				if(op=='v')
				{
					printf("Letra da Bola: V\nNão ganha nem perde!");	
				}
				else
				{
					if(op=='a')
					{
						printf("Letra da Bola: A\nPerde 15 pontos!");		
					}
					else
					{
						if(op=='l')
						{
							printf("Letra da Bola: L\nPerde 10 pontos!");			
						}
						else
						{
							printf("Opção Inválida!");
	
						}										
					}
				}
			}
		}
			
	return 0;
}
