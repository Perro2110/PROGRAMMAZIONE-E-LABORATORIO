#include <stdio.h>
#define DIM 10
float radice2(float y){
    float a,b,m,d;
    if(y>1){
        a=1;
        b=y;
    }else{
        a=y;
        b=1;
    }
    do{
        m=(a+b)/2;
        if(m*m<y){
            a=m;
        }else
            b=m;
        d=(m*m)-y;
        if(d<0)
            d=-d;
    }while(d>0.00001);
    return m;
}


int main(void){
 float y;
 int j=0;
 float vet[DIM];
 for(int i=0;i<10;i++){
    scanf("%f",&y);
    if(y>0){
        vet[j]=radice2(y);
        j++;
    }
 }
 for(int i=0;i<j;i++)
    printf("|| %f || \n",vet[i]);
}