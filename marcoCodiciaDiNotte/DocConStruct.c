#include <stdio.h>
#include <string.h>
#define DIM 3
typedef struct
{
    char nome[30];
    char cognome[30];
    char numeroTelefonico[19];
}Persone;

void stampa(Persone *popolame) {
    printf("%s \n",popolame->nome);
    printf("%s \n",popolame->cognome);
    printf("%s \n", popolame->numeroTelefonico);
}

int main(void)
{
    FILE *pf;
    Persone popolo[3];
    int i;
    pf = fopen("doc.txt","a+");
    for(i=0;i<3;i++){
        fscanf(pf,"%s",popolo[i].nome);
        fscanf(pf,"%s",popolo[i].cognome);
        fscanf(pf,"%s",popolo[i].numeroTelefonico);
        stampa(&popolo[i]);
    }

}