/*Leggere da tastiera il raggio di un cerchio e calcolarne diametro, perimetro e area attraverso tre funzioni:

 float diametroCerchio(int raggio)
 float perimetroCerchio(int raggio)
 float areaCerchio(int raggio)

 Utilizzare la soluzione dell’esercizio svolto sopra per calcolare il valore di π.
 Sviluppare anche una funzione:

int power(int base, int esponente)

 La funzione power prende in ingresso due numeri, base ed esponente, e calcola baseesponente.
 Stampare a video i risultati delle funzioni.*/


#include <stdio.h>

int power(int base, int esponente){
int sol=1;
for(int i=esponente;i!=0;i--)
sol=sol*base;
return sol;
}

float diametroCerchio(int raggio){
float sol=raggio*2;
return sol;
}
float perimetroCerchio(int raggio){
float sol=2*3.14*raggio;
return sol;
}
float areaCerchio(int raggio){
float sol=3.14*power(raggio,2);
return sol;
}



int main(void){
int raggio;
printf("Inserire raggio per calcoli: \n");
scanf("%d",&raggio);
printf("diametroCerchio:%f\n perimetroCerchio:%f\n AreaCerchio:%f\n",diametroCerchio(raggio),perimetroCerchio(raggio),areaCerchio(raggio));
printf("Calcolo logico del PI %f",perimetroCerchio(raggio)/diametroCerchio(raggio));
return 1;
}
