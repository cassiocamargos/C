/*
11- O departamento do meio ambiente classifica as indústrias da região em três categorias em
função do índice de poluição apresentando. Caso o índice fique entre 5 e 25 a indústria
é classificada como "REGULAR". Se o valor estiver acima de 25 mas ainda abaixo de 30,
a empresa é classificada como "POLUENTE" e deve suspender as atividades até que o índice
retorne ao intervalo considerado regular. Se o índice estiver acima de 30, a empresa é
classificada como "ALTAMENTE POLUENTE", é multada e deve requerer um novo alvará para
funcionamento. Crie um programa que leia o índice de poluição de uma empresa e a
classifique conforme descrito. Atenção: Caso o índice informado for abaixo de 5 uma
mensagem de erro deve ser mostrada na tela para alertar o usuário.
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
