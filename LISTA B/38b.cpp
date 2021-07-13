#include <iostream>


/*Cássio Camargos Fernandes Silva - NA: N6567B6

 38- Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas
começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de
um plano de saúde apresentou as faixas a seguir. Criar um algoritmo que entre com a idade de
uma pessoa e imprima o valor que ela deverá pagar: Até 10 anos - R$ 30,00; Acima de 10 até
29 anos - R$ 60,00; Acima de 29 até 45 anos - R$ 120,00; Acima de 45 até 59 anos - R$ 150,00;
Acima de 59 até 65 anos - R$ 250,00; maior que 65 anos - R$ 400,00. */


int main(int argc, char** argv) {

	int idade,preco;

    printf("Digite a idade: ");
    scanf("%i",&idade);
    printf("\n\n");

    if (idade <= 10){
        preco = 30;
    }

    if ((idade > 10) && (idade <= 29)){
        preco = 60;
    }

    if ((idade > 29) && (idade <= 45)){
        preco = 120;
    }

    if ((idade > 45) && (idade <= 59)){
        preco = 150;
    }

    if((idade > 59) && (idade <= 65)){
        preco = 250;
    }

    if(idade > 65){
        preco = 400;
    }

    printf("Valor a ser pago: R$ %i\n",preco);

return(0);
}
