/* Esercizio N° 3
   Fare la somma dei primi cento numeri */
// Studente: Rossi Edoardo   Data:14/11/2016   Classe: 3° INA   Numero: 17
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int Somma; // variabile che definisce la somma dei cento numeri
	int I; // variabile che definisce il contatore
	Somma=0;
	I=1;
	while(I<=100){
		Somma=Somma+I;
		I=I+1;
	}
	printf("\nil valore della somma: %d", Somma);
}
