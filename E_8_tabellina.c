/* Esercizio N°8
   programma che calcola la tabellina*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N; // variabile che definisce un numero
	int Cont; // variabile che definisce il contatore
	int Num; // variabile che definisce la tabellina	
	do{
		printf("Inserisci numero della tabellina tra 2 e 10: ");
		scanf("%d",&N);
	}while((N>10)||(N<2));
	Cont=1;
	while(Cont<=10) {
		Num=N*Cont;
		printf(" %d",Num);
		Cont++;
	}
}

