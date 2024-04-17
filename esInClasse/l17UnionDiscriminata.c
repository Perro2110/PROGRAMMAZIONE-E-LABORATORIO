#include <stdio.h>

typedef struct
{
    int LATO;

} datiQuadrato;

typedef struct
{
    int LATO1, LATO2;
} datiRetangolo;

typedef struct
{
    int BASE, LATO1, LATO2;
} datiTriangolo;

typedef struct
{
    int RAGGIO;
} datiCerchio;

typedef struct
{
    enum
    {
        quadrato,
        rettangolo,
        triangolo,
        cerchio
    } tipo;

    union
    {
        datiQuadrato quadrato;
        datiRetangolo rettangolo;
        datiTriangolo triangolo;
        datiCerchio cerchio;
    } datiFigura;
} Figura;

void Quadrato(Figura *f1, int lato)
{
    f1->tipo = quadrato;
    f1->datiFigura.quadrato.LATO = lato;
}
void Rettangolo(Figura *f1, int lato, int lato2)
{
    f1->tipo = rettangolo;
    f1->datiFigura.rettangolo.LATO1 = lato;
    f1->datiFigura.rettangolo.LATO2 = lato2;
}
void Trinagolo(Figura *f1, int base, int lato, int lato2)
{
    f1->tipo = triangolo;
    f1->datiFigura.triangolo.BASE = base;
    f1->datiFigura.triangolo.LATO1 = lato;
    f1->datiFigura.triangolo.LATO2 = lato2;
}
void Cerchio(Figura *f1, int raggio)
{
    f1->tipo = cerchio;
    f1->datiFigura.cerchio.RAGGIO = raggio;
}

void perimetro(int *p2p, Figura *f1)
{
    if (f1->tipo == quadrato)
        *p2p = f1->datiFigura.quadrato.LATO * 4;
    if (f1->tipo == triangolo)
        *p2p = f1->datiFigura.triangolo.BASE + f1->datiFigura.triangolo.LATO1 + f1->datiFigura.triangolo.LATO2;
    if (f1->tipo == rettangolo)
        *p2p = f1->datiFigura.rettangolo.LATO1 * 2 + f1->datiFigura.rettangolo.LATO2 * 2;
    if (f1->tipo == cerchio)
        *p2p = f1->datiFigura.cerchio.RAGGIO * 6.28;
}

int main(void)
{
    Figura f1;
    Quadrato(&f1, 3);
    int p;
    perimetro(&p, &f1);
    printf("%d", p);
}
