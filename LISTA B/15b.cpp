#include <iostream>


/*Cássio Camargos Fernandes Silva - NA: N6567B6

 15- Escreva um programa que leia 3 notas (valores reais), calculando e exibindo sua média aritmética. 
Imprima também "Aprovado" se a média for maior que 7, "Reprovado" se for menor que 3 e "Exame" se estiver entre 3 e 7. */


int main(int argc, char** argv) {
	
	float n1, n2, n3, media;
	
	printf ("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf ("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf ("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("\n\n");
	
	media=(n1+n2+n3)/3;
	printf("Media: %.2f\n\n", media);
	
	if(media>=7){
		printf("%f Aluno aprovado \n");
	} 	
	
	if(media>=3 && media<7){
		printf("%f Aluno em exame \n");
	}
	
	else {
		printf("%f Aluno reprovado \n");
	}

return 0;
}
