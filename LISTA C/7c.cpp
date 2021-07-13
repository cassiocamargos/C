/*
7- Uma pesquisa sobre o sabor de um novo refrigerante foi feita com várias p essoas. As me sma s
preenchiam uma tabela com 'O' de ótimo, 'B' de bom, 'R' de regular e 'U' de ruim. Faça um programa que
leias as respostas coletadas pela pesquisa (as letras 'O', 'B', 'R' e 'U') sendo que o fim d a s re s p ostas s erá
indicado por um traço '-'. Outras letras devem ser desconsideradas. O programa deve também:
- indicar a quantidade de cada resposta,
- indicar o total de respostas,
- calcular a porcentagem de cada uma das respostas, e
- indicar se a soma de respostas 'O' e 'B' é maior ou não que a soma de respostas 'R' e 'U'.
*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");

    char opniao;
    int cot, cbo, cre, cru;

    // o total foi usado float para poder calcular os percentuais
    // se usarmos INT, o resultado da divisão será zero para valores
    // pequenos e não dará para calcular os percentuais corretamente
    float total;

    cot = 0; // contador de ótimo
    cbo = 0; // contador de bom
    cre = 0; // contador de regular
    cru = 0; // contador de ruim
    opniao = ' ';

    while(opniao!='-')
    {
        printf("Qual sua opinião sobre o refrigerante?\n");
        printf("O - Ótimo\n");
        printf("B - Bom\n");
        printf("R - Regular\n");
        printf("U - Ruim\n");
        printf("Informe um traço (-) se quiser terminar\n");
        scanf("%c", &opniao);
        getchar(); // limpar o buffer para o retorno do loop

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
                break;
            case '-':
                // faz nada
                break;
            default:
                printf("Opção inválida! Tenta novamente.\n");
                break;
        }
    }

    total = cot + cbo + cre + cru;

    printf("Quantidade de pessoas que responderam ÓTIMO: %i\n", cot);
    printf("Quantidade de pessoas que responderam BOM: %i\n", cbo);
    printf("Quantidade de pessoas que responderam REGULAR: %i\n", cre);
    printf("Quantidade de pessoas que responderam RUIM: %i\n", cru);
    printf("Quantidade total de pessoas: %f\n", total);

    printf("Percetual de ÓTIMO: %f\n", cot/total*100);
    printf("Percetual de BOM: %f\n", cbo/total*100);
    printf("Percetual de REGULAR: %f\n", cre/total*100);
    printf("Percetual de RUIM: %f\n", cru/total*100);

    if ((cot+cbo)>(cre+cru))
    {
        printf("O total de pessoas que gostaram foi maior do que as que não gostaram.\n");
    }
    else
    {
        printf("O total de pessoas que gostaram NÃO foi maior do que as que não gostaram.\n");
    }

    return 0;
}
