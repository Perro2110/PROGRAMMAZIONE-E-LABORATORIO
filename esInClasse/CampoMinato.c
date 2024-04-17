#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NRIGHE 10
#define NCOLONNA 8
#define PROB 0.3

typedef struct
{
    int val;
    int scoperta;
    int mina;
} Casella;

typedef struct
{
    Casella CampoMinato[NRIGHE][NCOLONNA];
} CampoMinato;

float rnd_float(float a, float b)
{
    return a + (b - a) * ((float)rand() / RAND_MAX);
}

void popola(CampoMinato *cp)
{
    int i = 0, j = 0, g = 0;
    for (i = 0; i < NRIGHE; i++)
    {
        for (j = 0; j < NCOLONNA; j++)
        {
            if (rnd_float(0.0, 1.0) < PROB)
            {
                cp->CampoMinato[i][j].mina = 1;
                cp->CampoMinato[i][j].scoperta = 0;
                cp->CampoMinato[i][j].val = 1;
            }
            else
            {
                cp->CampoMinato[i][j].mina = 0;
                cp->CampoMinato[i][j].scoperta = 0;
                cp->CampoMinato[i][j].val = 0;
            }
        }
    }
    for (i = 0; i < NRIGHE; i++)
    {
        for (j = 0; j < NCOLONNA; j++)
        {
            if (i == NRIGHE - 1 || i == 0)
            {
                cp->CampoMinato[i][j].mina = 0;
                cp->CampoMinato[i][j].val = 9;
            }
            if (j == NCOLONNA - 1 || j == 0)
            {
                cp->CampoMinato[i][j].mina = 0;
                cp->CampoMinato[i][j].val = 9;
            }
        }
    }
}

int contaMineAttorno(Casella cm[NRIGHE][NCOLONNA], int riga, int colonna)
{
    int cont = 0;
    if (cm[riga][colonna].val != 9 && cm[riga][colonna].val != 1)
    {
        if (cm[riga - 1][colonna - 1].val == 1)
            cont++;
        if (cm[riga - 1][colonna].val == 1)
            cont++;
        if (cm[riga - 1][colonna + 1].val == 1)
            cont++;
        if (cm[riga][colonna - 1].val == 1)
            cont++;
        if (cm[riga][colonna + 1].val == 1)
            cont++;
        if (cm[riga + 1][colonna - 1].val == 1)
            cont++;
        if (cm[riga + 1][colonna].val == 1)
            cont++;
        if (cm[riga + 1][colonna + 1].val == 1)
            cont++;
    }
    return cont;
}
void stampa(CampoMinato cp)
{
    int i = 0, j = 0, g = 0;
    for (i = 0; i < NRIGHE; i++)
    {
        for (j = 0; j < NCOLONNA; j++)
        {
            if (cp.CampoMinato[i][j].val == 9)
            {
                printf("++");
                g++;
            }
            else
            {

                if (cp.CampoMinato[i][j].scoperta == 1)
                {
                    if (cp.CampoMinato[i][j].mina == 1)
                    {
                        printf("| * |");
                    }
                    else
                        printf("| %d |", contaMineAttorno(cp.CampoMinato, i, j));
                }
                else
                    printf("| - |");
            }
        }
        printf("\n");
    }
}
int gioca(CampoMinato *cp)
{
    int x, y;
    scanf("%d%d", &y, &x);
    cp->CampoMinato[x][y].scoperta = 1;
    system("clear");
    if (cp->CampoMinato[x][y].mina == 1){
        printf("boom");
        return 0;
    }
    else
        stampa(*cp);
    gioca(cp);
}

int main(void)
{
    srand(time(NULL));
    CampoMinato Cp;
    popola(&Cp);
    stampa(Cp);
    gioca(&Cp);
}