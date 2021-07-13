#include<stdio.h>

int y = 100; // escopo global

int outrafuncao() {
    int x = 10; // escopo local
    y = 200;
    printf("Valor de x em outrafuncao: %i\n", x);
    return x;
}

int main() {
    int x = 5;  // escopo local
    printf("Valor de y em main: %i\n", y);
    outrafuncao();
    printf("Valor de y em main: %i\n", y);
    printf("Valor de x em main: %i\n", x);
    return 0;
}
