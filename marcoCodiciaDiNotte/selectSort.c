#include <stdio.h> 
#define DIM 10

int main() { 
int a[DIM] = {5,8,0,1,4,2,4,3,9,7}; 
int i, j, min, t;

for(i=0; i<DIM; i++){  //riggira stringendo sempre di più il campo di sequenza da cercare 
min=i; 
for (j=i;j<DIM;j++){          //
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
}