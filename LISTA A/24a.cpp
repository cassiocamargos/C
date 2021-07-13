#include<stdio.h>
#include<locale.h>

/*24- A padaria Docinho de Coco vende uma certa quantidade de pães franceses e uma
quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final
do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta poupança (10% do total arrecadado). Você foi contratado para fazer
os cálculos para o dono. Com base nestes fatos, faça um programa para ler as quantidades de
pães e de broas, e depois calcular os dados solicitados.*/

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
