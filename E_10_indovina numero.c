#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
  Rossi Edoardo
  3INA
  19/12/2016
  Indovina numero
  Versione 1.0
*/
main() 
{
	int Num_u;
	int Cont;
	int Num_c;
	int indovinato;
	
	Num_c=rand()%15;
	indovinato=0;
	Cont=10;
	printf("il pc ha pensato un numero da 1 a 14");
	do{
		printf("\nIndovinalo con 10 tentativi:");
		scanf("%d",&Num_u);
		if(Num_u==Num_c) {
			indovinato=1;
		}
		t--;
	}while(Cont>0&&indovinato==0);
	if(indovinato==1) {
		printf("Hai vinto");
	}else{
		printf("Hai perso");
	}
}
