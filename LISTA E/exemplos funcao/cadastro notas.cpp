#include <stdio.h>
#include <locale.h>
#define TAMANHO 10

// vari�veis globais, pois foram declaradas fora das fun��es
char ra[80];
float np1, np2, pim;
int i;
FILE* arquivo;
int opcao = 0;

void MostrarMenu()
{
	printf("(1) - Listar os dados cadastrados\n");
	printf("(2) - Adicionar um aluno com notas\n");
	printf("(3) - Excluir um aluno com notas\n");
	printf("(5) - Sair\n");
	printf("Entre com a op��o desejada: ")	;
	scanf("%i", &opcao);
	getchar(); // limpar o <enter> do scanf anterior
}

void ListarRegistros()
{
	if (!arquivo_existe("notas.txt"))
	{
        printf("\n\nNenhum dado ainda foi cadastrado.\n");
		return;
    }


	printf("\n\nListagem do cadastro\n\n");
	arquivo = fopen("notas.txt","r"); // abrir arquivo em modo leitura
	while(!feof(arquivo))
	{
		fscanf(arquivo,"%s %f %f %f\n", ra, &np1, &np2, &pim); // acessar os dados
		printf("RA: %s - Notas: (%f/%f/%f)\n",ra,np1,np2,pim); // exibir na tela
	}
	fclose(arquivo); // fechar o uso do arquivo

	printf("Fim da listagem!");
}

void GravarRegistro()
{
	printf("\n\nInclus�o de registro\n\n");

	// obter os dados do usu�rio
	printf("RA: ");
	gets(ra);

	printf("Nota 1: ");
	scanf("%f", &np1);

	printf("Nota 2: ");
	scanf("%f", &np2);

	printf("PIM: ");
	scanf("%f", &pim);

	getchar(); // limpar o <enter> do scanf anterior

	arquivo = fopen("notas.txt","a+"); // abrir o arquivo em modo grava��o
	fprintf(arquivo,"%s %f %f %f\n", ra, np1, np2, pim); // escrever no arquivo
	fclose(arquivo); // fechar o uso do arquivo

	printf("Registro adicionado com sucesso!");
}

void ExcluirRegistro()
{
	char raExcluir[80];
	printf("\nExclus�o do cadastro\n\n");

	printf("Informe o RA que deseja remover: ");
	gets(raExcluir);

	arquivo = fopen("notas.txt","r"); // abrir arquivo em modo leitura
	FILE* arquivoNovo = fopen("notas_novo.txt","w"); // abrir arquivo em modo escrita
	while(!feof(arquivo))
	{
		fscanf(arquivo,"%s %f %f %f\n", ra, &np1, &np2, &pim); // acessar os dados
		if (strcmp(ra, raExcluir)!=0) // se o RA lido for diferente do desejado para exluir, grava no arquivo novo
		{
			fprintf(arquivoNovo,"%s %f %f %f\n", ra, np1, np2, pim); // escrever dados no arquivo novo
		}
	}
	fclose(arquivo); // fechar o uso do arquivo
	fclose(arquivoNovo); // fechar o uso do arquivo

	// linux
	//system("rm notas.txt");
	//system("mv notas_novo.txt notas.txt");

    // windows
	system("del notas.txt");
	system("rename notas_novo.txt notas.txt");

	printf("Fim da exclus�o!");
}

int arquivo_existe(char nmarq[]) {
	FILE* arq = fopen(nmarq, "r");
    if (arq) {
        fclose(arq);
        return 1;
    }
    return 0;
}

int main()
{

	setlocale(LC_ALL,"");

	while(opcao!=5)
	{

		MostrarMenu();

		switch(opcao)
		{
			case 1: // listar
				ListarRegistros();
				break;

			case 2: // gravar
				GravarRegistro();
				break;

			case 3: // gravar
				ExcluirRegistro();
				break;

			case 5: // sair
				break;

			default:
				printf("Op��o inv�lida!");
				break;
		}
		printf("\n\nPressione <enter> para continuar.\n\n");
		getchar();

        // linux
		//system("clear");

		// windows
		system("cls");

	} // fim do while

}
