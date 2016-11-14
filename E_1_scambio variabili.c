/* Esercizio N°1
   date due variabili contenenti due valori,
   scambiare il contenuto delle due variabili*/
// Studente: Rossi Edoardo   Data: 14/11/2016   Classe: 3° INA Numero:17
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int A; // variabile che definisce il valore di A
	int B; // variabile che definisce il valore di B
	int C; // variabile che definisce il valore di C
	printf("\ninserisci il primo valore ");
	scanf("%d",& A);
	printf("\ninserisci il secondo valore ");
	scanf("%d",& B);
	C=A;
	A=B;
	B=C;
	printf("\nil nuovo valore di A: %d", A); 
	printf("\nil nuovo valore di B: %d", B);
}
