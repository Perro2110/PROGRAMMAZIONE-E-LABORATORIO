#include<stdio.h>

float radice(float n){

  float a, x,appogino;
  a=n;
  if (a <= 0) {
    printf("%f e` negativo o nullo\n", a);
    return -1;
  }
  x = 1.0;
  appogino=(x * x - a);
  if(appogino<0)
  appogino=-appogino;
  while (appogino>0?appogino:-appogino / a > 1e-5){
    x = (x + a / x) / 2; 
    appogino=(x * x - a);
  }
  return x;
  
}


float putenza(float b,float e){
 float appoggio=b,pot;
 if(e<0)
  pot=-e;
 for(float i=pot;i!=1;i--)
  b*=appoggio;
 if(e<0)
  b=1/b;
 return b;
}

int main(){
/*float b,e,s;   
 scanf("%f%f",&b,&e);
 s=putenza(b,e);*/
float n=0,p;
  scanf("%f",&n);
  p=radice(n);
  if(p==-1)
    printf("e`negativo o nullo\n");
  else
   printf("La radice quadrata e` circa %f\n",p);
}




