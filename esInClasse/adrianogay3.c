/*
Scrivere una funzione int sommaDivisori(int numero) che ha come unico parametro un numero intero e come
valore di ritorno la somma dei divisori del numero passato.
 Utilizzarla per stampare tutti i numeri perfetti (cioè uguali alla somma dei loro divisori) compresi fra 1 e 100.
 Esempio: 28 è un numero perfetto. I suoi divisori sono 1, 2, 4, 7, 14 e 1 + 2 + 4 + 7 + 14 = 28
*/

#include<stdio.h>

int perfetto(int n){
int somma=0;
for(int i=1;i<n;i++)
if(n%i==0)
somma+=i;
return somma;
}
void main(){
for(int i=1;i<101;i++)
if(i==perfetto(i))
printf("\n*****%d e' numero perfetto*****\n",i);
}