/*
18- Faça um programa que leia três números e imprima qual deles é o maior.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
    int num1,num2,num3;

    printf("Entre com o primeiro numero: ");
    scanf("%i", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%i", &num2);

    printf("Entre com o terceiro numero: ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("Maior: %i\n", num1);
    }

    if (num2>num1 && num2>num3)
    {
        printf("Maior: %i\n", num2);
    }

    if (num3>num1 && num3>num2)
    {
        printf("Maior: %i\n", num3);
    }

    return 0;
}
