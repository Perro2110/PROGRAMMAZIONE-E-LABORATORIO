#include <stdio.h>
#define DIM 10
int primo(int n){
int j,i;
j=1;
i=2;
 while(j!=0 && i<n){
    j=n;
    while(j>0){
        j=j-i;
    }
    i=i+1;
 }
 if(j!=0){
    return 1;
 }else 
    return 0;
}


int main(){
 int n,vet[DIM],flag=0,riempiezza=0,max=0;
 for(int i=0;i<DIM && flag!=1; i++){
    scanf("%d",&vet[i]);
    riempiezza++;
 if(vet[i]<0){
    flag=1;
    vet[i]=0;
    riempiezza--;
    }
 }  
 for(int i=0;i<riempiezza;i++)
    if(primo(vet[i])==1 && vet[i]>max)
        max=vet[i];
 printf("%d",max);
}