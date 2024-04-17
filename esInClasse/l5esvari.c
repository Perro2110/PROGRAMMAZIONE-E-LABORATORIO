
#include <stdio.h>
void main(){
int m,a,g;
stro:
scanf("%d%d%d",&g,&m,&a);
if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&g==31){
 if(m==12)
  printf("mese 1 e g=1 buon capodanno \n");
 else
 printf("mese %d e g=1 \n",m+1);
 }
else if((m==4||m==6||m==9||m==11)&&g==30)
  printf("mese %d e g=1 \n",m+1);
else if((m==2&&((a%4==0&&a%100!=0)||a%400==0))&&g==29)
  printf("mese %d e g=1 \n",m+1);
else if((m==2 &&(a%4!=0||a%100!=0))&&g==28)
   printf("mese %d e g=1 \n",m+1);
else  printf("giorno %d del mese %d \n",g+1,m);
}

/*
 int ag;
 scanf("%d",&ag);
 if(ag%4==0&&ag%100!=0)
    printf("anno bisestile \n");
 else
    printf("NO \n");
*/
