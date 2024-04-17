//fatte matrici
#include <stdio.h>
#include <string.h>
#define DIM 10
int main(void){
    FILE * pf;
    pf=fopen("kiki.txt","a+");  
    char pollo[DIM];
    do{
        fscanf(stdin,"%s",pollo);
        fprintf(pf,pollo); //scrivo sul file alla quale punta pf la stringa pollo
        fprintf(pf," ");
    }while(strcmp(pollo,"fine")!=0);  //fino alla fine
}
