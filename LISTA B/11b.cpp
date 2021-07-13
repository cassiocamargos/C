/*
11- O departamento do meio ambiente classifica as ind�strias da regi�o em tr�s categorias em
fun��o do �ndice de polui��o apresentando. Caso o �ndice fique entre 5 e 25 a ind�stria
� classificada como "REGULAR". Se o valor estiver acima de 25 mas ainda abaixo de 30,
a empresa � classificada como "POLUENTE" e deve suspender as atividades at� que o �ndice
retorne ao intervalo considerado regular. Se o �ndice estiver acima de 30, a empresa �
classificada como "ALTAMENTE POLUENTE", � multada e deve requerer um novo alvar� para
funcionamento. Crie um programa que leia o �ndice de polui��o de uma empresa e a
classifique conforme descrito. Aten��o: Caso o �ndice informado for abaixo de 5 uma
mensagem de erro deve ser mostrada na tela para alertar o usu�rio.
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"");
	
    int ind;

    printf("Entre com o indice de poluicao: ");
    scanf("%i", &ind);

    if (ind<5)
    {
        printf("Erro! Indice invalido\n");
    }

    if (ind>=5 && ind<=25)
    {
         printf("Empresa REGULAR!\n");
    }

    if (ind>25 && ind<=30)
    {
         printf("Empresa POLUENTE!\n");
    }
	else
    if (ind>30)
    {
         printf("Empresa ALTAMENTE POLUENTE!\n");
    }

    return 0;
}
