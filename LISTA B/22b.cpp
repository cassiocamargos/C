/*
O esquema de endereçamento de rede mais comum é chamado IPv4. Os endereços IPv4
consistem de endereços de 32 bits divididos em 4 octetos. Crie um programa que leia os 4
octetos de um endereço IP e o classifique conforme a tabela abaixo:

Classe      Início           Fim
A           0.0.0.1         126.255.255.255
B           128.0.0.0       191.255.255.255
C           192.0.0.1       223.255.255.254
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
    int oct1, oct2, oct3, oct4;

    printf("Informe o primeiro octeto do IPv4: ");
    scanf("%i", &oct1);

    printf("Informe o segundo octeto do IPv4: ");
    scanf("%i", &oct2);

    printf("Informe o terceiro octeto do IPv4: ");
    scanf("%i", &oct3);

    printf("Informe o quarto octeto do IPv4: ");
    scanf("%i", &oct4);

    //A  0.0.0.1  126.255.255.255
    if (oct1>=0 && oct1<=126 && oct2>=0 && oct2<=255 &&
        oct3>=0 && oct3<=255 && oct4>=1 && oct4<=255)
    {
        printf("Este IP é classe A");
    }

    //B  128.0.0.0  191.255.255.255
    if (oct1>=128 && oct1<=191 && oct2>=0 && oct2<=255 &&
        oct3>=0 && oct3<=255 && oct4>=0 && oct4<=255)
    {
        printf("Este IP é classe B");
    }

    //C  192.0.0.1  223.255.255.254
    if (oct1>=192 && oct1<=223 && oct2>=0 && oct2<=255 &&
        oct3>=0 && oct3<=255 && oct4>=1 && oct4<=254)
    {
        printf("Este IP é classe C");
    }

    return 0;
}
