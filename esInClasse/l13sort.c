#include<stdio.h>
#define DIM 10

 int main ( void ) {
 int a[DIM];
 int i , dl = 0,l=-1;
 do{
    l++;
    scanf("%d",&a[l]);
 }while(a[l]>0&&l<10);


 for (dl = 0; dl < l; dl ++) {
    int j = dl;
    int m = a[ dl ];
    while (j > 0 && m < a[j - 1]) {
        a[j ] = a[j - 1];
        j--;
    }
    a[j ] = m;
 }
 for (i = 0; i < l ; i ++)
    printf (" %d " , a [i ]);
 printf (" \n" );
 }

/*
    int i, j, min, t;

    for(i=0; i<DIM; i++){  //riggira stringendo sempre di più il campo di sequenza da cercare 
        min=i; 
        for (j=i;j<DIM;j++){              //
            if (a[j]<a[min])             // QUAL'È IL MINIMO SUBITO DOPO I (se c'è)
            min=j;                      //
        } 
        t = a[min];         //
        a[min] = a[i];     // SCAMBIO 
        a[i] = t;         //
    }

    for(i=0; i<DIM; i++){
    printf("%d ", a[i]);		
    }	



*/