
#include <stdio.h>

void main () {
 int b,c,d;  //definizione 
//(sotto) memoria centrale
// b = 0; //assegnamento | inizializzazione | <espressione di assegnamento>:== <IVALUE>:=<ESPRESSIONE> DOVE <IVALUE>=<IDENTIFICATORE>
 printf ("inserire 3 n: \n"); //output
 scanf("%d%d%d",&b,&c,&d); //input
 printf (" b: %d \n",(b+=(c+d))); //stampa del espressione ((Espressione variabile | <espressioneVariabile> ::= <identificatore>))
}       //output    //cpu

/*
a=(d=(c=1));
printf ("a: %d \n",a); 

#include <stdio.h>
#include <string.h>
main()
{
char stringa1[20];
printf("inserisci la prima stringa: ");
scanf("%s", stringa1);
if (strcmp(stringa1,"pollo")== 0)
printf("cip");

}
*/
