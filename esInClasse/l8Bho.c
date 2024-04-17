#include <stdio.h>
void main(){/*
for(int i=1;i!=100;i++){
if(i%5==0&&i%3==0)
printf("bumbam\n");
else if(i%3==0)
printf("bim\n");
else if(i%5==0)
printf("bum\n");
else printf("%d\n",i);
}

*/
int i,j;
for(i=1;i<=10;i++){
for(j=1;j<=10;j++)
if(i*j<=50)
printf(" %3d ",(i*j));
printf("\n");}


}