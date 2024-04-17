#include <stdio.h>
void main(){
   //18 gennaio 
  //  31 tot
 /*
 int n;
 pollo:
 scanf("%d",&n);
 if(n>=0)
  printf("%d",n*=2);
 else 
  goto pollo;
*/

/*while(i>0){
  printf("%d",i%10);
  i/=10;
}*/

/*
int i=5,n=0,s=0;
for(;i!=0;i--){
scanf("%d",&n);
s+=n;
}
printf("%d",s);

*/
int m=7,n=3,i=0,flag;
scanf("%d%d",&m,&n);
do{
 flag=m-n;
 i++;
}while(flag<0);
printf("%d",i+1);
printf(".%d",m%n);
}
