#include <stdio.h>
#define DIM 100
#define MDIM 2
#define CLIENTIDIM 3
#include <string.h>
int id = 0;

typedef struct
{
    char marca[DIM];
    int annoDiImmatricolazione;
    int cilindrata;
    int id;
    int posseduta;
} automobili;

typedef struct
{
    char nome[DIM];
    char cognome[DIM];
    int idAutomobile;
} acquirente;

int inserireDatiAuto(automobili *a)
{
    for (int i = 0; i < MDIM; i++)
    {
        printf("INSERIRE MARCA \n");
        scanf("%s", a[i].marca);
        do
        {
            printf("annoDiImmatricolazione \n");
            scanf("%d", &a[i].annoDiImmatricolazione);
        } while (a[i].annoDiImmatricolazione < 2000 || a[i].annoDiImmatricolazione > 2022);

        a[i].id = id;
        printf("ID SETTATTO A: %d\n", a[i].id);
        id++;
        a[i].posseduta = 0;
        printf("Fleg posseduta settata A: %d\n", a[i].posseduta);
        do
        {
            printf("Cilindrata \n");
            scanf("%d", &a[i].cilindrata);
        } while (a[i].cilindrata < 800 || a[i].cilindrata > 2500);
    }
    return 1;
}
int Acquisto(acquirente *cl, automobili *a)
{
    cl->idAutomobile = a->id;
    a->posseduta = 1;
}
void stampamacchinainfo(automobili a)
{
    printf("%s \n", a.marca);
    printf("%d \n", a.annoDiImmatricolazione);
    printf("%d \n", a.cilindrata);
    printf("%d \n", a.posseduta);
    printf("%d \n", a.id);
}

int ricercadatamarca(char *s, automobili *autosalone)
{
    for (int i = 0; i < MDIM; i++)
    {
        if (strcmp(s, autosalone[i].marca) == 0)
        {
            stampamacchinainfo(autosalone[i]);
            return 1;
        }
    }
    return 0;
}

void popolaVarClienti(acquirente *clienti)
{

    printf("POPOLA I CLIENTI:\n");
    for (int i = 0; i < CLIENTIDIM; i++)
    {
        printf("Nome e cognome:\n");
        scanf("%s", clienti[i].cognome);
        scanf("%s", clienti[i].nome);
        clienti[i].idAutomobile = -69;
    }
}

void stampaClienti(acquirente cl)
{
    printf("%s", cl.cognome);
    printf("%s", cl.nome);
}

void VisualizzarecognomeDataAutoCilindrataSUP1800(acquirente *clienti, automobili *autosalone)
{
    for (int i = 0; i < CLIENTIDIM; i++)
    {
        for (int j = 0; j < MDIM; j++)
            if (clienti[i].idAutomobile == autosalone[j].id && autosalone[j].cilindrata >= 1800)
                stampaClienti(clienti[i]);
    }
}

void QiA(automobili *autosalone, int anno)
{
    int cont = 0;
    int i;
    for (i = 0; i < MDIM; i++)
    {
        if (anno == autosalone[i].annoDiImmatricolazione)
        {
            cont++;
        }
    }
    printf("%d", cont);
}

int main(void)
{
    int i;
    automobili autosalone[MDIM]; // AUTO OFFERTE AI CLIENTI
    acquirente clienti[CLIENTIDIM];
    popolaVarClienti(clienti);    // 100%
    inserireDatiAuto(autosalone); // 100%
    printf("\n*****************************\n");
    printf("acquirente sta acquistando la seconda macchina\n"); // 100%
    Acquisto(&clienti[1], &autosalone[1]);
    char s[DIM];
    scanf("%s", s);
    ricercadatamarca(s, autosalone);                                   // 100%
    VisualizzarecognomeDataAutoCilindrataSUP1800(clienti, autosalone); // 100%
    int anno;
    scanf("%d", &anno);
    QiA(autosalone, anno); // 100%
}