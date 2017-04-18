#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
  Studente: Rossi Edoardo
  Classe: 3INA
  Data: 19/12/2016
  Titolo: caricare e stampare un array inverso
  Versione: 1.0
*/

int main() {
    int Num[15];
    int Cont;
    Cont=0;
    while(Cont<15){
          printf("\nInserisci numero: ");
          scanf("%d",&Num[Cont]);
          Cont++;
    }
    printf("\n");
    while(Cont>=0){
          if(Num[Cont]!=0){
               printf("%d",Num[Cont]);
          }
          Cont--;
    }
    printf("\n");
    system("PAUSE");
}
