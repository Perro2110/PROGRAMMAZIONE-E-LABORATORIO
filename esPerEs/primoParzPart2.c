#include <stdio.h>
#define DIM 50

void main(){
 double DL[DIM];
 int flag=0;
 int l=0,j=0,i=0;
 double v;
 while(flag!=1 && l<DIM){
  l++;
  printf("inserire val: \n");
  scanf("%lf",&v);
  if(v>=0)
   DL[l]=v;
  else
   flag=1;
 }
 for(int i=0;i<l;i++){
  for(j=l-1;j>i;j--)
   if(DL[j]<DL[j-1]){
    double temp=0;
    temp=DL[j];
    DL[j]=DL[j-1];
    DL[j-1]=temp; 
 }
}
for(int g=0;g!=l;g++)
 printf("|| %lf ||",DL[g]);
}