/* Esercizio N°7
   programma che calcola il numero minimo*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N; // variabile che definisce un numero
	int Cont; // variabile che definisce il contatore
	int Num; // variaile che definisce un numero
	int Min; // variabile che definisce il numero minimo
	printf("Inserire un numero ");
	scanf("%d",& N);
	Cont=1;
	printf("Inserisci primo numero:");
	scanf("%d",& Num);
	Min=Num;
	while(Cont<N) {
		printf("Inserisci un altro numero:");
		scanf("%d",&Num); 
			if(Num<Min) {
				Min=Num;
			}
			Cont++;
	}
	printf("Il numero minimo e':%d",Min);
}

