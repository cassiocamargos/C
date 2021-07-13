#include<stdio.h>
#include<locale.h>

float calcularMedia3(float a, float b, float c)
{
    return (a+b+c)/3;
}

int main() // função principal
{
    setlocale(LC_ALL, "");

    float x = 10, y = 20, z = 5;

    printf("%.2f\n", calcularMedia3(x, y, z));
    printf("%.2f\n", calcularMedia3(x, y, 10));
    printf("%.2f\n", calcularMedia3(x, 30, 10));
    printf("%.2f\n", calcularMedia3(1, 2, 3));


    return 0;
}
