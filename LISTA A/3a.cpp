#include<iostream>

int main(){
	
	float c, f;
	
	printf("graus celcius para fahrenheit \n\n");
	printf("digite a temperatura em graus celcius: ");
	scanf("%f", &c);
	printf("\n");
	
	f = 1.8*c+32;
	
	printf("temperatura em graus fahrenheit: %.1f",f);
	
	return 0;
}


