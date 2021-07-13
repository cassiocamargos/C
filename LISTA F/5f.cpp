/*
Lista F - Exercício 5
*/

typedef struct
{
    char nome[101];
    float altura;
    float peso;
} Corpo;

// c. Escreva as instruções necessárias para definir o tipo Casal, contendo dois membros do tipo Corpo;
typedef struct
{
    Corpo pessoa1;
    Corpo pessoa2;
} Casal;

int main()
{
    //a. Escreva uma instrução que declare uma variável chamada p1 do tipo Corpo;
    Corpo p1;

    // b. Escreva uma instrução que atribua o valor 1.68 para a altura da variável acima.
    p1.altura = 1.68;

    // d. Escreva a instrução necessária para declarar uma matriz de 10 elementos do tipo Casal;
    Casal encontro[10];

    /*
    e. Escreva as instruções necessárias para preencher o quinto elemento da matriz
    criada acima com os dados do casal Toinho (nome = Antonio Pegatudo, peso =
    80kg, altura = 1.80m) e Tiana (nome = Sebastiana Pulabrejo, peso = 65kg, altura
    = 1.55m).
    */

    encontro[4].pessoa1.altura = 1.80;
    encontro[4].pessoa1.peso = 80;
    strcpy(encontro[4].pessoa1.nome,"Antonio Pegatudo");

    encontro[4].pessoa2.altura = 1.55;
    encontro[4].pessoa2.peso = 65;
    strcpy(encontro[4].pessoa2.nome,"Sebastiana Pulabrejo");

    return 0;
}
