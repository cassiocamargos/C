/*
29- Escreva um algoritmo em que leia um n�mero e imprima a raiz quadrada do n�mero caso
ele seja positivo ou igual a zero e o quadrado do n�mero caso ele seja negativo.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
    int n, resultado;

    // obter um numero do usuario
    printf("Entre com um numero: ");
    scanf("%i", &n);

    if (n>=0)
    {
        // raiz quadrada
        resultado = sqrt(n);
    }
    else
    {
        // quadrado do n�mero pow (base, expoente)
        resultado = pow(n,2);
    }

    printf("Resultado: %i\n", resultado);

    return 0;
}
