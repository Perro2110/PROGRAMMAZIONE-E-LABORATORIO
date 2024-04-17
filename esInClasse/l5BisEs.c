#include <stdio.h>

void main(){
  unsigned int x,y;
  printf("Inserisci delle coordinate di una scacchiera: ");
  scanf("%d %d", &x,&y);
  if(x<9 && y<9){
    if((x+y)%2==0) 
     printf("Casella Bianca\n");
    else 
     printf("Casella nera\n");
  }
  else 
   printf("La coordinata e' fuori dalla scacchiera\n");
//_______________________________________________________//
int g;
pollo:
    printf("Inserire numero da 1 a 7 \n");
    scanf("%d",&g);
    if(g>7||g<1)
     goto pollo;
if(g==1)printf("\nLunedi\n");
if(g==2)printf("\nmartedi\n");
if(g==3)printf("\nmercoledi\n");
if(g==4)printf("\ngiovedi\n");
if(g==5)printf("\nvenerdi\n");
if(g==6)printf("\nSabato\n");
if(g==7)printf("\nDomenica\n");
//_______________________________________________//
int n;
scanf("%d",&n);
if(n<0)
 printf("%d",0-n);
else 
 printf("%d",n); 
//__________________________________________________//
int n1,d1,n2,d2;
scanf("%d%d%d%d",&n1,&d1,&n2,&d2);
if(n1/d1 == n2/d2) 
 printf("stesso N");
else 
 printf("diverso N");

}