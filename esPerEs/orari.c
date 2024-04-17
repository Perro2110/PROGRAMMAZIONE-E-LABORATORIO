#include<stdio.h>


typedef struct{
int ore;
int minuti;
}Orari;

Orari orario(int minuti){
    Orari diff;
    diff.ore=minuti/60;
    diff.minuti=minuti%60;
    return diff;
}

int calcoloDiff(Orari o1, Orari o2){
    int minuti2= (o2.ore*60)+o2.minuti;
    int minuti1= (o1.ore*60)+o1.minuti;
    int minuti=minuti2-minuti1;
    return minuti;
}

int main(void){
    Orari o1;
    Orari o2;
    scanf("%d%d%d%d",&o1.ore,&o1.minuti,&o2.ore,&o2.minuti);
    printf("%d:%d",orario(calcoloDiff(o1,o2)).ore,orario(calcoloDiff(o1,o2)).minuti);
}