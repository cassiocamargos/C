#include<stdio.h>
#include<locale.h>

float converteCelsius(float tempfahr)
{
    /*
    float cel;
    cel = (tempfahr-32)/9*5;
    return cel;
    */
    return (tempfahr-32)/9*5;
}


int main() // função principal
{
    setlocale(LC_ALL, "");

    float tf, tc;

    printf("Entre com o valor em Fahrenheit: ");
    scanf("%f", &tf);

    tc = converteCelsius(tf);

    printf("Temperatura em Celsius: %f\n", tc);
    printf("Temperatura em Celsius fixa: %f\n", converteCelsius(120));

    return 0;
}
