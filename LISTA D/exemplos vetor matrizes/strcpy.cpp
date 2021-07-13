/*
strcpy(string_destino, string_origem) – Copia a string de origem sobre a string de destino.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL, "");

    char texto1[100] = "TOINHO PULABREJO";
    char texto2[100] = "TIANA SOMAISUMA";

    printf("ANTES\n");
    printf("texto1: %s\ntexto2: %s\n\n", texto1,texto2);

    // texto1 = texto2;
    strcpy(texto1, texto2);

    //texto2 = "CESAR"; // não pode fazer deste jeito
    strcpy(texto2, "CESAR");

    printf("DEPOIS\n");
    printf("texto1: %s\ntexto2: %s\n\n", texto1,texto2);



    return 0;
}
