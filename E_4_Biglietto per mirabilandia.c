// Es N° 4
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Biglietto per mirabilandia
   Autore: Edoardo Rossi - 3° INA
   Data:21/11/2016
   Versione: 1.0 */
   main()
   {
   	int Num_Eta; // variabile che definisce il numero di anni di una persona
   	int H_Persona; // variabile che definisce l'altezza di una persona
   	int Disabile; // variabile che definisce se una persona è disabile o no
   	float Prezzo; // variabile che definisce il prezzo da pagare
   	printf("\nla persona ha: anni");
   	scanf("%d", & Num_Eta);
   	printf("\naltezza della persona: cm");
   	scanf("%d", & H_Persona);
   	printf("\nla persona e' disabile? (1=si , 0=no)");
   	scanf("%d", & Disabile);
   	if(Disabile==1){           // verifica della disabilità della persona, se la persona è disabile allora entra gratis, altrimenti se la persona non è disabile valutare le differenti opzioni       
   		printf("\nil prezzo della persona è gratuito");
	   else{
	   	if(Num_Eta>60){
	   		printf("\nil prezzo del biglietto: € 25");
		   }
		   else{
		   	if(H_Persona<=100){
		   		printf("\nl'entrata e' gratis");
			   }
			   else{
			   	if(H_Persona>=100) and (H_Persona<=140){
			   		printf("\nil prezzo del biglietto: € 28");
			   		else{
			   			printf("\nil prezzo del biglietto: € 34.90");
					   }
				   }
			   }
		   }
	   }
   }
   printf("\nil prezzo del biglietto: %f", Prezzo :);
   getchar();
   }
   
   

   
