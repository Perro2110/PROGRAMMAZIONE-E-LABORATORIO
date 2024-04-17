#include<stdio.h>

void main(){
  int a;
  scanf("%d",&a);
  if(a%4==0) printf("Anno bisestile\n");
  else  printf("!anno bisestile\n");
/*

  int jdGiorninato=0;
  int jdtoday=0;
  int G,M,A;
  int N0,N1,N2,N3;
  printf("inserire giorno mese e anno del suo compleanno \n");
  scanf("%d%d%d",&G,&M,&A);
  N0=((M-14)/12);
  N1=((1461*(A+4800+N0))/4);
  N2=((367*(M-2-12*N0))/12);
  N3=((3*(A+4900+N0))/400);
  jdGiorninato=(N1+N2-N3+G-32075);
    int gg1=jdGiorninato%7;
  printf("oggi è: %d \n",gg1);
/*______________________________________________________________
  printf("inserire giorno di oggi \n");
  scanf("%d%d%d",&G,&M,&A);
  N0=((M-14)/12);
  N1=((1461*(A+4800+N0))/4);
  N2=((367*(M-2-12*N0))/12);
  N3=((3*(A+4900+N0))/400);
  jdtoday=(N1+N2-N3+G-32075);
  int gg=jdtoday%7;
  printf("oggi è: %d",gg);
  jdtoday-=jdGiorninato;
  printf("giorni vissuti: | %d | \n",jdtoday);*/
}


/*  
#include <stdio.h>
#include <time.h>

int f(int g, int m, int a);

int main(){
    int g,m,a;

    printf("ins giorno ");
    scanf("%d",&g);
    printf("ins mese ");
    scanf("%d",&m);
    printf("ins anno ");
    scanf("%d",&a);
    
    printf("JD = %d\n",f(g,m,a));

    printf("Giorni dalla mia nascita = %d\n",f(g,m,a)-f(25,10,2003));
}

int f(int g, int m, int a){
    int n0 = (m-14)/12;
    int n1 = (1461*(a+4800+n0))/4;
    int n2 = (367*(m-2-12*n0))/12;
    int n3 = (3*(a+4900+n0))/400;
    return n1 + n2 - n3 + g - 32075;
}
*/
