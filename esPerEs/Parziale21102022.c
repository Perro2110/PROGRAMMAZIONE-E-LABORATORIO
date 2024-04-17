/**
Leggere da tastiera un intero n a piacere e calcolare il numero di zeri che si trovano alla fine di n! Come gestire
valori enormi come 1000!? (spoiler: il risultato 249). Esempio: 6! = 720 quindi la funzione il valore calcolato è 1
**/

#include <stdio.h>
#include<math.h>
void main(){
    int n;
    int s;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(pow(5,i+1)<n)
        s=s+(n/pow(5,i));
}       printf("%d",s);
}




/*
#include<stdio.h>
#include<math.h>
void main(){
    float pi=0;
    int i=0;
    float j=0;
    scanf("%d",&i);
    for(j=0;j<=i;j++){
        pi+=(pow(-1,j))/((2*j)+1);
    }printf("%f",pi*4);
}
*/

/*
 Formula per convertire una misura da chilometri a miglia : dividi il valore dell'unità di lunghezza per 1,609
 Formula per convertire una misura da chili a libbre : moltiplica il valore dell'unità di massa per 2,205
 Chiedere all’utente se desidera fare una conversione di massa o di lunghezza (usare degli int per la scelta)
 Prendere in ingresso un intero ed eseguire la trasformazione desiderata
 Stampare a video il risultato
 Ripetere la conversione fino all’inserimento di un carattere speciale

#include <stdio.h>
void main(){
int scelta=0;
int c=0;
float var;
do{
printf("\ninserire scelta desiderata, 3 per uscire \n");
do{
printf("\n*******************************************\n");
printf("Conversione di massa cliccare su 1");
printf("\nConversione di lunghezza cliccare su 2");
printf("\n*******************************************\n");
scanf("%d",&c);
if(c==1)scelta=1;
if(c==2)scelta=1; 
}while(scelta!=1);
if(c==2){
 scanf("%f",&var);
 var=(var/1.609);
 printf("%f",var);
}
if(c==1){
 scanf("%f",&var);
 var=(var*2.205);
 printf("%f",var);
}
}while(c!=3);
}





Prendere in ingresso una serie di numeri interi terminata dall’inserimento del carattere ‘0’
Calcolare la media (float) di questa sequenza 
Stampare a video il risultato


#include<stdio.h>
void main(){
int n;
float med=0;
float i=0;
do{
scanf("%d",&n);
med+=n;
i++;
}while(n!=0);
i--;
printf("%f",med/i);

}

*/
