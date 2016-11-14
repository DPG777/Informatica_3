/* Esercizio N°2
   dati tre numeri trovare il numero maggiore*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N1; // variabile che definisce il primo numero
	int N2; // variabile che definisce il secondo numero
	int N3; // variabile che definisce il terzo numero
	int Max; // variabile che definisce il numero maggiore
	printf("\ninserisci il primo numero ");
	scanf("%d",& N1);
	printf("\ninserisci il secondo numero ");
	scanf("%d", & N2);
	printf("\ninserisci il terzo numero ");
	scanf("%d",& N3);
	if(N1>N2){
		Max=N1;
	}
	else{
		Max=N2;
	}
	if(N3>Max){
		Max=N3;
	}
	printf("\nil numero maggiore: %d", Max);
}
