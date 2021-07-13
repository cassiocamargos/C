/*
21- Um cinema que possui capacidade de 100 lugares está sempre com ocupação total. Certo dia cada
espectador respondeu a um questionário, no qual constava: sua idade e sua o piniã o em re la çã o a o filme
(que podia ser ótimo, bom, regular, ruim ou péssimo). Elabore um programa que, lendo estes dados,
responda:
- a quantidade de respostas ótimo;
- a média de idade das pessoas que responderam ruim;
- a porcentagem de respostas péssimo e a maior idade que utilizou esta opção.
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

        getchar(); // limpar o buffer antes de ler a opnião

        printf("Qual sua opinião sobre o filme?\n");
        printf("O - Ótimo\n");
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
                printf("Opção inválida! Tenta novamente.\n");
                break;
        }

    }


    total = cot + cbo + cre + cru + cpe;

    printf("Quantidade de respostas ótimo: %i\n", cot);
    printf("Média de idade das pessoas que responderam ruim: %i\n", totalidru / cru);
    printf("Porcentagem de respostas péssimo: %f\n",cpe/total*100);
    printf("Maior idade que utilizou esta opção: %i\n", maiorpe);

    return 0;
}
