/* 12- Fa�a um programa que, dada uma seq��ncia qualquer de notas de alunos variando d e 0 a 10
escreva, ao final da digita��o, a maior e a menor das notas. O final ser� identificado pela introdu��o de uma
nota -1, que n�o deve fazer parte do c�lculo. 


NOME: C�SSIO CAMARGOS FERNANDES SILVA 
RA: N6567B6
*/

#include<stdio.h>
#include<locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	float nota, maior, menor, i;
	
	nota=1;
	
	while(nota>0)
	{
        printf("Entre com a nota do aluno: ");
        scanf("%i",&nota);
	
		 if (nota>maior || i==1)
            {
            	maior = nota;	
			}
		
		 if (nota<nota || i ==1)
		 {
		 	menor = nota;
		 }		 
	}
	
	printf("A maior nota �: %i\n",maior);
	printf("A menor nota �: %i",menor);
	
	return 0;
}
