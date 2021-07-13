// Passagem de argumentos por referência
// --- VEREMOS ISSO QUANDO FALARMOS SOBRE PONTEIROS --


// Passagem de argumentos por valor
int somar_valor(int a, int b) {
    // as variáveis "a" e "b" tem escopo local
    a = a + b;
    return a;
}


#include<stdio.h>
int main() {
    int x = 10, y = 5, z;

    printf("ANTES\n");
    printf("Valor de x: %i, valor de y: %i\n\n", x, y);

    z = somar_valor(x, y);
    printf("Resultado da soma: %i\n\n", z);

    printf("DEPOIS\n");
    printf("Valor de x: %i, valor de y: %i\n", x, y);


    return 0;
}
