#include <stdio.h>
#define DIM 10



int main(void){

    typedef struct{
        int g;
        int m;
        int a;
    }data;

    typedef struct{
        char nome[10];
        data dnascita;
    }persona;
    persona p1;
    data datadioggi;
    scanf("%s%d%d%d",p1.nome,&p1.dnascita.g,&p1.dnascita.m,&p1.dnascita.a);
    scanf("%d%d%d",&datadioggi.g,&datadioggi.m,&datadioggi.a);


}