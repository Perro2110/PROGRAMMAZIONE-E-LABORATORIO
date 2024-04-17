#include <stdio.h>
int main(void){
    FILE *pf;
    char p [6];
    pf=fopen("rotto.txt","r"); //creo e punto a
    fscanf(pf,"%s",p);
    printf("%s",p);
}