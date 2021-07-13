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
            printf("Na posição %i, tem um espaço.\n", i);
        }
    }

    return 0;
}
