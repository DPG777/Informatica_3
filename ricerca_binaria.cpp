#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* 
   Titolo: Ricerca binaria
   Studente: Rossi Edoardo      
   Classe:3INA
   Data:08/02/2017
   Versione:1.0
*/
     
int main()
{
	int Vettore[20]={0,1,4,7,10,13,15,17,18,20,22,25,28,35,37,42,47,53,64,85};		// variabile che indica il  vettore
	int Cont;			// variabile che indica il contatore
	int Num;			// variabile che indica il numero che si vuole trovare
	int Max;			// variabile che indica la posizione massima del vettore
	int Min;			// variabile che indica la posizione minima del vettore
	int Cent;			// variabile che indica la posizione centrale del vettore
	int Flag;			// variabile che serve per indicare se l'elemento è stato trovato o no
	
	Cont=0;
	Max=19;
	Min=0;
	Cent=0;
	Flag=0;  //variabile che indica elemento trovato
	printf("inserisci il numero che vuoi trovare ");
	scanf("%d", & Num);
	Cent=(Max-Min)/2;					// operazione che serve per individuare la posizione centrale dle vettore
	while((Max!=Min) && (Flag==0)){   	//  ciclo precondizionale while-do per trovare il numero 
		if(Vettore[Cent]==Num){
			Flag=1;
		}else{
			if(Vettore[Cent]<Num){
				Min=Cent;
				Cent=(Max-Min)/2+Min;
			}else{
				Max=Cent;
				Cent=(Max-Min)/2+Min;	
			}
		}
		printf("\nil centro e' %d\n", Cent);
	}
	if(Flag==1){			// condizione if che serve a mostrare a video se il numero è stato trovato o no
		printf("\nil numero e' stato trovato e si trova alla posizione %d\n\n", Cent);
	}else{
		printf("\nil numero non e' stato trovato\n\n");
	}
	system("PAUSE");
}
