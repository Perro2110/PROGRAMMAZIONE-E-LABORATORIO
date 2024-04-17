#include <stdio.h>
#define DIM 100

int cubo(int n);

void main(){
 int s[DIM];
 int M;
 printf("Inserire M \n");
 scanf("%d",&M);
 for(int i=1;i<=M;i++)
  s[i]=cubo(i);
 for(int i=1;i<=M;i++)
  printf(" ||%d|| ",s[i]);
}

int cubo(int n){
   int i,j,s=0;
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            s+=n;
        }
    }
    return s;
}