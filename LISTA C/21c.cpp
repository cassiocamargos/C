/*
21- Um cinema que possui capacidade de 100 lugares est� sempre com ocupa��o total. Certo dia cada
espectador respondeu a um question�rio, no qual constava: sua idade e sua o pini� o em re la �� o a o filme
(que podia ser �timo, bom, regular, ruim ou p�ssimo). Elabore um programa que, lendo estes dados,
responda:
- a quantidade de respostas �timo;
- a m�dia de idade das pessoas que responderam ruim;
- a porcentagem de respostas p�ssimo e a maior idade que utilizou esta op��o.
*/
#include<stdio.h>
#include<locale.h>
#define QTD 5
int main()
{
    setlocale(LC_ALL,"");

    char opniao;
    int cot, cbo, cre, cru, cpe, idade, totalidru, maiorpe, c;
    float mediaru, total;

    cot = 0;
    cbo = 0;
    cre = 0;
    cru = 0;
    cpe = 0;
    totalidru = 0;

    for(c=0;c<QTD;c++)
    {
        printf("Qual sua idade? ");
        scanf("%i", &idade);

        getchar(); // limpar o buffer antes de ler a opni�o

        printf("Qual sua opini�o sobre o filme?\n");
        printf("O - �timo\n");
        printf("B - Bom\n");
        printf("R - Regular\n");
        printf("U - Ruim\n");
        printf("P - Pessimo\n");
        scanf("%c", &opniao);

        switch(opniao)
        {
            case 'O':
                cot++;
                break;
            case 'B':
                cbo++;
                break;
            case 'R':
                cre++;
                break;
            case 'U':
                cru++;
                totalidru += idade;
                break;
            case 'P':
                if (idade>maiorpe || cpe==0)
                    maiorpe = idade;
                cpe++;
                break;
            default:
                printf("Op��o inv�lida! Tenta novamente.\n");
                break;
        }

    }


    total = cot + cbo + cre + cru + cpe;

    printf("Quantidade de respostas �timo: %i\n", cot);
    printf("M�dia de idade das pessoas que responderam ruim: %i\n", totalidru / cru);
    printf("Porcentagem de respostas p�ssimo: %f\n",cpe/total*100);
    printf("Maior idade que utilizou esta op��o: %i\n", maiorpe);

    return 0;
}
