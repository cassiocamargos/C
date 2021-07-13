/*
Exemplo de validação de senha
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL,"");

    char senha[11];

    printf("Informe a senha: ");
    gets(senha);

    if (strcmp(senha,"XPTO")==0)
    {
        printf("Senha correta, bem-vindo ao SISTEMA X\n\n");
    }
    else
    {
        printf("Senha incorreta!\n\n");
    }



    return 0;
}

