#include <iostream>


/*Cássio Camargos Fernandes Silva - NA: N6567B6

 42- Criar um algoritmo que leia um número inteiro entre 1 e 12 e escrever o mês
correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma
mensagem informando que não existe mês com este número. */


int main(int argc, char** argv) {
	
	int mes;
 
	printf("Digite o numero do mes: ");
	scanf ("%d",&mes);

    if(mes==1){
    	printf("\nJaneiro\n");
    }
    if (mes==2){
    	printf ("\nFevereiro\n");
    }
    if(mes==3){
    	printf("\nMarco\n");
             }
      if (mes==4){
             printf ("\nAbril\n");
             }
      if(mes==5){
             printf("\hMaio\n");
             }
      if (mes==6){
             printf ("\nJunho\n");
             }
      if(mes==7){
             printf("\nJulho\n");
             }
      if (mes==8){
             printf ("\nAgosto\n");
             }
      if(mes==9){
             printf("\nSetembro\n");
             }
      if (mes==10){
             printf ("\nOutubro\n");
             }
      if(mes==11){
             printf("\nNovembro\n");
             }
      if (mes==12){
             printf ("\nDezembro\n");       
        }
        else{
             printf ("\nNumero %d e Invalido!\n\n",mes);
            }
            
return 0;
}
