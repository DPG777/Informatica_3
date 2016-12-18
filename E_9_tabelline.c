/* Esercizio N°9
   programma che esegue la stampa delle tabelline di tutti i numeri naturali 
   compresi tra 2 e 10 
   1 tabellina per riga*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N; // variabile che definisce il valore di un numero
	int Num; // variabile che definisceil numero della tabellina
	int I; // variabile che definisce il contatore
	Num=2;
	while(Num<=10){
		I=0;
		while(I<=10){
			N=Num*I;
			printf(" %d ", N );
			I++;
		}
		printf("\n");
		Num++;
	}
}
