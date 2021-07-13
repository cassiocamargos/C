/*
Lista C
22- O Departamento de Trânsito do Estado de São Paulo compilou dados de acidentes de tráfego no
Estado no último ano. Para cada motorista envolvido num acidente, uma entrada de dados foi preparada
com as seguintes informações:
- ano de nascimento do motorista (numérico)
- sexo ('M' ou 'F')
- código de registro (1 para São Paulo e 0 para qualquer outro estado)
Preparar um algoritmo para ler um conjunto de dados e imprimir a seguinte estatística de motoristas
envolvidos em acidentes:
- Percentagem de motoristas com menos de 25 anos;
- Percentagem de mulheres;
- Percentagem de motoristas maiores de 18 mas menores de 25;
- Percentagem de motoristas com registro fora de São Paulo;
Utilizar o método de fim-de-arquivo para terminar a leitura de dados ou quando o ano de nascimento for um valor 0.
*/

#include <stdio.h>
#include <locale.h>
#define ANO_ATUAL 2020
int main()
{
    setlocale(LC_ALL, "");

    int anonascimento=-1, codreg, idade, cmenor25=0, cmulher=0, cmaior18=0, coutros=0;
    float ctotal = 0;
    char sexo;

    while(anonascimento!=0)
    {
        printf ("\n\nInforme 0 (zero) no ano para terminar\n\n");

        // - ano de nascimento do motorista (numérico)
        printf("Entre com o ano de nascimento: ");
        scanf("%i", &anonascimento);

        getchar(); // limpar o buffer

        if (anonascimento!=0)
        {
            // - sexo ('M' ou 'F')
            printf("Entre com o sexo (M) Masculino / (F) Feminino: ");
            scanf("%c", &sexo);

            // - código de registro (1 para São Paulo e 0 para qualquer outro estado)
            printf("Entre com o código de registro (1) São Paulo / (0) Outros estados: ");
            scanf("%i", &codreg);


            idade = ANO_ATUAL - anonascimento;

            // - Percentagem de motoristas com menos de 25 anos;
            if (idade<25)
                cmenor25++;

            // - Percentagem de mulheres;
            if(sexo=='F')
                cmulher++;

            // - Percentagem de motoristas maiores de 18 mas menores de 25;
            if (idade<25 && idade>18)
                cmaior18++;

            // - Percentagem de motoristas com registro fora de São Paulo;
            if (codreg==0)
                coutros++;


            ctotal = ctotal + 1; // conta todos
        }
    }

    printf("Percentagem de motoristas com menos de 25 anos: %f\n", cmenor25/ctotal*100);
    printf("Percentagem de mulheres: %f\n", cmulher/ctotal*100);
    printf("Percentagem de motoristas maiores de 18 mas menores de 25: %f\n", cmaior18/ctotal*100);
    printf("Percentagem de motoristas com registro fora de São Paulo: %f\n", coutros/ctotal*100);


    return 0;
}
