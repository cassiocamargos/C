#include <iostream>


/*C�ssio Camargos Fernandes Silva - NA: N6567B6

 42- Criar um algoritmo que leia um n�mero inteiro entre 1 e 12 e escrever o m�s
correspondente. Caso o usu�rio digite um n�mero fora desse intervalo, dever� aparecer uma
mensagem informando que n�o existe m�s com este n�mero. */


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
