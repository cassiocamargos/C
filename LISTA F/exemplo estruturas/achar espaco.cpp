int main()
{
    char nome[101];
    int i;

    printf("Entre com um nome: ");
    gets(nome);

    for(i=0;i<strlen(nome);i++)
    {
        if(nome[i]==' ')
        {
            printf("Na posi��o %i, tem um espa�o.\n", i);
        }
    }

    return 0;
}
