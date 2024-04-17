#include <stdio.h>
void main(){
    int y1,y3,y2,x1,x3,x2;
printf("inserisci coordinate: \n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
if(((x1==x2)&&(x2==x3))||((y1==y2)&&(y2==y3))||((x2==y2)&&(x3==y3)&&(x1==y1)))
printf("hai vinto \n");


}

