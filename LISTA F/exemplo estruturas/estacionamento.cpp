#include<stdio.h>
#include<locale.h>
#define TAM 3

typedef struct
{
    char placa_carro[9];
    char marca[16];
    char hora_entrada[6];
} entrada;

entrada ObterDadosDaVaga()
{
    entrada e;

    printf("Entre com a placa do carro: ");
    scanf("%s", e.placa_carro);

    printf("Entre com a marca do carro: ");
    scanf("%s", e.marca);

    printf("Informe a hora de entrada: ");
    scanf("%s", e.hora_entrada);

    getchar(); // limpar buffer

    return e;
}


// variáveis globais
entrada vagas[TAM];
int opcao = 0, ccarros = 0;

void menu()
{
    printf("Selecione uma opção: \n");
    printf("1) Entrada de um veículo\n");
    printf("2) Saída de um veículo\n");
    printf("3) Listar veículos\n");
    printf("4) Sair\n");
    scanf("%i", &opcao);
    getchar(); // limpar buffer
}

void LimparVaga(int pos)
{
    strcpy(vagas[pos].placa_carro,"");
    strcpy(vagas[pos].marca,"");
    strcpy(vagas[pos].hora_entrada,"");
}

void EntrarVeiculo()
{
    if (ccarros==TAM)
    {
        printf("Estacionamento lotado!\n");
    }
    else
    {
        // obter os dados do veículo
        vagas[ccarros] = ObterDadosDaVaga();
        printf("Carro estacionado com sucesso na vagas %i\n", ccarros);
        ccarros++;
    }
}

void SairVeiculo()
{
    ccarros--;
    printf("Saindo o carro da vaga %i\n", ccarros);
    printf("Placa: %s\n", vagas[ccarros].placa_carro);
    LimparVaga(ccarros);
}


void ListarVeiculos()
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("[%i]: (%s)\t\t", i, vagas[i].placa_carro);
    }
}

int main()
{
    setlocale(LC_ALL,"");

    while(opcao!=4)
    {
        system("clear"); // system("cls");
        menu();
        switch(opcao)
        {
            case 1:
                EntrarVeiculo();
                break;
            case 2:
                SairVeiculo();
                break;
            case 3:
                ListarVeiculos();
                break;
            case 4:
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
        if (opcao!=4)
        {
            printf("\n\nPressione <enter> para continuar.");
            getchar();
        }
    }

    return 0;
}

