
void TirarEspacos(char texto[])
{
    int i;
    for(i=0;i<strlen(texto);i++)
    {
        if(texto[i]==' ')
        {
            texto[i] = '+';
        }
    }
}

void ColocarEspacos(char texto[])
{
    int i;
    for(i=0;i<strlen(texto);i++)
    {
        if(texto[i]=='+')
        {
            texto[i] = ' ';
        }
    }
}

int main()
{
    char nome[101];
    int i;

    printf("Entre com um nome: ");
    gets(nome);

    TirarEspacos(nome);

    printf("Nome sem espa�os: %s\n", nome);

    ColocarEspacos(nome);

    printf("Nome com espa�os novamente: %s\n", nome);

    return 0;
}

