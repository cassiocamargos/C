#include<iostream>
int main(){
	
	int n1,n2, soma, subtracao, multi;
	float divisao;
	
	printf("digite o primeiro numero: ");
	scanf("%i",&n1);
	printf("digite o segundo numero: ");
	scanf("%i",&n2);
	
	soma=n1+n2;
	subtracao=n1-n2;
	multi=n1*n2;
	divisao=n1/n2;
	
	printf("%i + %i = %i\n",n1, n2, soma);
	printf("subtracao: %i\n",subtracao);
	printf("multiplicacao: %i\n",multi);
	printf("divisao: %.2f\n",divisao);
	
	return 0;
}
