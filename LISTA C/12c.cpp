/* 12- Faça um programa que, dada uma seqüência qualquer de notas de alunos variando d e 0 a 10
escreva, ao final da digitação, a maior e a menor das notas. O final será identificado pela introdução de uma
nota -1, que não deve fazer parte do cálculo. 


NOME: CÁSSIO CAMARGOS FERNANDES SILVA 
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
	
	printf("A maior nota é: %i\n",maior);
	printf("A menor nota é: %i",menor);
	
	return 0;
}
