#include <stdio.h>
#include <string.h>
#define DIM 10

typedef struct
{
    char nome[DIM];
    int valore;
} sasso;

void popolare(sasso *vet)
{
    int i;
    for(i=0;i<DIM;i++){
        scanf("%s",vet[i].nome);
        scanf("%d",&vet[i].valore);
    }
}

void sort(sasso *a)
{

    int i, j, min;
    sasso t;

    for (i = 0; i < DIM; i++)
    { // riggira stringendo sempre di più il campo di sequenza da cercare
        min = i;
        for (j = i; j < DIM; j++)
        {                                    //
            if (a[j].valore < a[min].valore) // QUAL'È IL MINIMO SUBITO DOPO I (se c'è)
                min = j;                     //
        }
        strcpy(t.nome, a[min].nome);     //
        t.valore = a[min].valore;        //
        strcpy(a[min].nome, a[i].nome);  //
        a[min].valore = a[i].valore;     // SCAMBIO
        strcpy(a[i].nome, t.nome);       //
        a[i].valore = t.valore;          //
    }
}
/*
void ruba(sasso *a,int gr){
    int i;
    for(i=DIM-1;i!=gr;i--){
        printf("%s",a[i].nome);
    }

}
*/

int main(void)
{
    int grandezzaMano,i;
    sasso CAVEAU[DIM];
    do
    {
        scanf("%d", &grandezzaMano);
    } while (grandezzaMano > 10 || grandezzaMano == 0);
    popolare(CAVEAU);
    sort(CAVEAU);
    printf("__________MANI DEL LADRO:__________\n");
    for (i = grandezzaMano ; i < DIM; i++)
    {
        printf("%s %d \n", CAVEAU[i].nome,CAVEAU[i].valore);
    }
}