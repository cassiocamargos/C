#include<iostream>

int main(){
	
	float d1,d2,d3,d4,d5,d6,d7, media;
	
	printf("digite a temperatura em celcius no primeiro dia: ");
	scanf("%f",&d1);
	printf("digite a temperatura em celcius no segundo dia: ");
	scanf("%f",&d2);
	printf("digite a temperatura em celcius no terceiro dia: ");
	scanf("%f",&d3);
	printf("digite a temperatura em celcius no quarto dia: ");
	scanf("%f",&d4);
	printf("digite a temperatura em celcius no quinto dia: ");
	scanf("%f",&d5);
	printf("digite a temperatura em celcius no sexto dia: ");
	scanf("%f",&d6);
	printf("digite a temperatura em celcius no setimo dia: ");
	scanf("%f",&d7);
	printf("/n");
	
	media=(d1+d2+d3+d4+d5+d6+d7)/7;
	
	printf("a media da temperatura na semana foi %.1f graus celcius",media);
	
	return 0;
}
