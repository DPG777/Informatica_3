/* Esercizio N°6
   programma che calcola il fattoriale di un numero*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N; //variabile che acquisisce un numero
	int Cont; //variabile che definisce il contatore
    int Fat; // variabile che definisce il fattoriale
    Fat=1;
    printf("inserisci un numero ");
    scanf("%d", & N);
    for(Cont=0;Cont<N;Cont++){
    	Fat=Fat*(N-Cont);
	}
	printf("il numero fattoriale e' %d", Fat);
}

