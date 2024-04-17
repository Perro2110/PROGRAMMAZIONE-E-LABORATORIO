#include <stdio.h>
#define max 50

void main(){
    int DL = 0;

    float a[max];
    int i;
    float r;

    for(i=0;i<max;i++){
        scanf("%f",&r);
        if(r<0){
            DL--;
            break;
        }
        else{
            a[i] = r;
            DL++;
        }
    }

    int j;
    float t;

    for(i=0;i<DL;i++){
        for(j=DL-1;j>i;j--){
            if(a[j]<a[j-1]){
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
        }
    }
    for(i=0;i<DL;i++){
        printf("%f ",a[i]);
    }
}


/*
#include <stdio.h>
#define DIM 3
float radice(float y){
    float a=0,b=0,m=0,d=0;
    if(y>1){
        a=1;
        b=y;
    }else{
        a=y;
        b=1;
    }
    do{
        m=(a+b)/2;
        if((m*m)<y){
            a=m;
        }else{
            b=m;
        }
        d=((m*m)-y);
        if(d<0)
            d=-d;
    }while(d>0.00001);
    return m;
}


void main(){
    float vet[DIM],vetSol[DIM];
    float dimensione=0;
    int j=0;
    for(int i=0;i<DIM;i++){
        printf("inserire valore da radicalizzare\n");
        scanf("%f",&vet[i]);
    }  
    for(int i=0;i<DIM;i++){
        dimensione=radice(vet[i]);
        if(dimensione>0){
            vetSol[j]=dimensione;
            j++;
        }
    }
    for(int i=0;i<j;i++)
        printf("%f\n",vetSol[i]);
}*/