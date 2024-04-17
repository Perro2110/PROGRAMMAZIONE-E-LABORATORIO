//con controllo di flusso macchina virtuale diventa turing complete
#include<stdio.h>
void main(){
int g,f,d; // 2 3  
scanf("%d%d%d",&g,&f,&d);
 if(g>f)
  if(g>d)
   printf("g: %d",g);
  else 
   printf("d: %d",d);
 else if(f>d)
   printf("f:%d",f);
 else 
   printf("d: %d",d);

  printf("-------------------------\n CAPISC NU POC'  \n -------------------------\n");
  int a=6,b=24;
  printf("         NUMERI SCELTI:  | %d | | %d |\n",a,b);
  printf("                  FALSE: | 0 | TRUE:| 1 |\n");
  printf("r        isultati a<0: ||%d||, a==-b ||%d||,a*a<0 ||%d||,a mod 2==0 ||%d||,a mod b!=0 ||%d||",a<0,a==-b,a*a<0,a%2==0,a%b!=0);

  printf("\n\n -------------------------\n INSERISCI e'NUMER PLS  \n -------------------------\n\n");
  scanf("%d %d",&a,&b);
  if(a>0)
    printf("poss\n");
  if(a%2==0)
    printf("pari\n");
  else
    printf("disp\n");

   if(a==b)
      printf("uguali\ %d \n",a);
   else if(a>b)
      printf("aaaaaaa: %d\n",a);
   else
      printf("bbbbbbbbbbbb: %d\n",b);

if(a<0)
  printf("pollo: %d",a*-1);
else
  printf("pollo: %d",a); 

