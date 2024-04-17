#include <stdio.h>
#define DIM 5

int radice (int n){ //GIUSTO AL 100%
 int a=1;
 int b=n;
 while (a<b)
 {
    if(((a*a)+(b*b))<(2*n))
        a=a+1;
    else 
        b=b-1;
 }
 if(n==a*b)
    return a;
 else 
    return -1;
}


int main(void){
    int vet[DIM];
    int n,tuttopieno=0;    
    int i,di=0;
    scanf("%d",&n);
    i=1;
    while(tuttopieno==0){          //DI<DIM FORSE ERA MEGLIO DI FLAG 
        if(radice(i)!=-1&&i>n){
            vet[di]=i;
            di++;
        }
        i++;
        if(di==5)                  //DIV ERA MEGLIO
            tuttopieno++;
    }
    for(i=0;i<DIM;i++)
        printf(" %d ",vet[i]);
}