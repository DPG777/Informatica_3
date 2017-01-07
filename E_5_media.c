/* Esercizio N°5
   programma che calcola la media di N numeri*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N; //variabile che acquisisce un numero
	int Cont; //variabile che definisce il contatore
	int Somma; //variabile che acquisisce la somma
	int Num; //variabile che definisce un altro numero
	float Media; // variabile che definisce la media
	printf("inserisci un numero ");
	scanf("%d", & N);
	Cont=0;
	Somma=0;
	while(Cont<N){
		printf("inserisci un altro numero");
		scanf("%d", & Num);
		Somma=Somma+Num;
		Cont=Cont+1;
	}
	Media=Somma/N;
	printf("\nla media %f", Media);
}

