#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
  Studente: Rossi Edoardo
  Classe: 3INA
  Data: 18/04/2017
  Titolo: confronto tra due stringhe
  Versione: 1.0
*/

int main()
{
	char Parola1[100];
	char Parola2[100];
	int Flag;
	int I;
	printf("inserisci una parola: ");
	scanf("%s", Parola1);
	printf("\ninserisci una seconda parola per il confronto: ");
	scanf("%s", Parola2);
	I=0;
	Flag=0;
	while(Flag==0 && (Parola1[I]!='\0' || Parola2[I]!='\0')){
		if(Parola1[I]!=Parola2[I]){
			Flag=1;
		}
		I++;
	}
	if(Flag==0){
		printf("\nle due parole sono uguali\n");
	}else{
		printf("\nle due parole non sono uguali\n");
	}
	system("PAUSE");
}
