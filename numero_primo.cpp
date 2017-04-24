#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
  Studente: Rossi Edoardo
  Classe: 3INA
  Data: 24/04/2017
  Titolo: 
  Versione: 1.0
*/

int main()
{
	int N;
	int Primo;
	do{
		printf("inserisci un numero positivo ");
		scanf("%d", & N);
	}while(N<0);
	if(N%2==0 || N%3==0){
		printf("\nil numero %d non e' un numero primo", N);
	}else{
		printf("\nil numero %d e' un numero primo", N);
	}
}
