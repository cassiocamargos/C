#include<stdio.h>
#include<locale.h>

/*24- A padaria Docinho de Coco vende uma certa quantidade de p�es franceses e uma
quantidade de broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final
do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto
deve guardar numa conta poupan�a (10% do total arrecadado). Voc� foi contratado para fazer
os c�lculos para o dono. Com base nestes fatos, fa�a um programa para ler as quantidades de
p�es e de broas, e depois calcular os dados solicitados.*/

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
	int qtdpao, qtdbroa;
	float valorvenda, valorpoupa;
	
	printf("Entre com a quantidade de paes vendidos: ");
	scanf("%i", &qtdpao);

	printf("Entre com a quantidade de broas vendidas: ");
	scanf("%i", &qtdbroa);
	
	valorvenda = qtdpao * 0.12 + qtdbroa * 1.5;
	valorpoupa = valorvenda * 10 / 100;
	
	printf("Total vendido: ");
	printf("%f", valorvenda);
	printf("\n");
	
	printf("Valor para poupar: ");
	printf("%f", valorpoupa);
	printf("\n");
	
	return 0;
}
