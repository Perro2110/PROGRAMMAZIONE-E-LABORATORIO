/**
Scrivere due funzioni che, dati i tre lati di un triangolo, ne calcolino (restituiscano come valore): 
Perimetro
Area al quadrato usando la formula di Erone: l’area al quadrato può essere calcolata come p(p – a)(p – b)(p – c), dove a, b e
c sono i lati e p è il semiperimetro (cioè perimetro/2)

Nella funzione per il calcolo dell’area utilizzare la funzione per il calcolo del perimetro.
Leggere da tastiera i tre lati di un triangolo, chiamare le funzioni per il calcolo del perimetro e dell’area e
stampare nel main il valore di ritorno di entrambe le funzioni.
N.B.: non tutte le terne di numeri formano un triangolo. Testare il programma con i valori: (3,4,5) e (5,12,13)
*******/
#include <stdio.h>
#include <math.h>
int PERIMETRO(int a,int b,int c){
int P2p=a+b+c;
printf("P2p:%d\n",P2p);
return P2p;
}

int AREA(int a,int b,int c){
int p2=PERIMETRO(a,b,c);
int p=p2/2;
int area=p*(p-a)*(p-b)*(p-c);
area=sqrt(area);
return area;
}

int main(){
int a,b,c,P2p,p,A;
scanf("%d%d%d",&a,&b,&c);
A=AREA(a,b,c);
printf("A: %d\n",A);
}