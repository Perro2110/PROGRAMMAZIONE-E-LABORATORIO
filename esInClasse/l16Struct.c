/*
CON IMMISSIONE È UTILIZZO DI METODO SOMMA SOTTO FORMA DI VOID PER FAR SI CHE SI MODIFICHI IL VALORE DI UNA TERZA 
FRAZZIONE UTILIZZANDO VARIABILI LOCALI SI PERDE DI LEGGIBILITÀ... MA COSI È STATO RICHIESTO IN ESITO DI VALUTAZIONE.
*/

#include <stdio.h>

typedef struct
{
    float numeratore;
    float denominatore;
    float valore_vero;
} Frazione;



int massimoComunDivisore (int n1, int n2)
{
  int resto, a, b;
  a = n1;
  b = n2;
  while (b > 0)	{
    resto = a % b;
    a = b;
    b = resto;
  }	
  return a;
}


Frazione costruttoreFrazione(Frazione f1)
{
    printf("Immettere numeratore: ");
    scanf("%f", &f1.numeratore);
    do
    {
        printf("Immettere denominatore: ");
        scanf("%f", &f1.denominatore);
    } while (f1.denominatore == 0);

    f1.valore_vero = f1.numeratore / f1.denominatore;

    int mcd=massimoComunDivisore((int)f1.numeratore,(int)f1.denominatore);
    f1.numeratore=f1.numeratore/mcd;
    f1.denominatore=f1.denominatore/mcd;


    return f1;
}

Frazione costruttoreFrazioneDatoDenENum(float den, float num)
{
    Frazione f2;
    f2.numeratore = num;
    f2.denominatore = den;
    f2.valore_vero = num / den;
    int mcd=massimoComunDivisore((int)f2.numeratore,(int)f2.denominatore);
    f2.numeratore=f2.numeratore/mcd;       // U O A I A E T
    f2.denominatore=f2.denominatore/mcd;  // A T M T C M N E  

    return f2;
}

void toStringValue(Frazione f1)
{
    printf("%.2f \n", f1.valore_vero);
}

void toStringValueStorto(Frazione f1)
{
    int mcd=massimoComunDivisore((int)f1.numeratore,(int)f1.denominatore);
    f1.numeratore=f1.numeratore/mcd;
    f1.denominatore=f1.denominatore/mcd;
    printf("%.2f/%.2f \n", f1.numeratore, f1.denominatore);
}

void somma(Frazione* f1,Frazione* f2,Frazione* S)
{
    *S=costruttoreFrazioneDatoDenENum((f1->denominatore*f2->denominatore),(f1->numeratore*f2->denominatore)+(f2->numeratore*f1->denominatore));
/* -> e' equivalente a "(* )." */
}

Frazione differenza(Frazione f1,Frazione f2)
{
    Frazione differenza;
    differenza.numeratore=(f1.numeratore*f2.denominatore)-(f2.numeratore*f1.denominatore);
    differenza.denominatore=(f1.denominatore*f2.denominatore);
    differenza.valore_vero=differenza.numeratore/differenza.denominatore;
    return differenza;
}

Frazione moltiplicazione(Frazione f1,Frazione f2)
{
    Frazione moltiplicazione;
    moltiplicazione.numeratore=(f1.numeratore*f2.numeratore);
    moltiplicazione.denominatore=f1.denominatore*f2.denominatore;
    moltiplicazione.valore_vero=moltiplicazione.numeratore/moltiplicazione.denominatore;
    return moltiplicazione;
}

Frazione divisione(Frazione f1,Frazione f2)
{
    Frazione div;
    div.numeratore=(f1.numeratore*f2.denominatore);
    div.denominatore=f1.denominatore*f2.numeratore;
    div.valore_vero=div.numeratore/div.denominatore;
    return div;
}



int main(void)
{
    Frazione f1;                        //esempio immissione da funzione 
    f1 = costruttoreFrazione(f1);

    Frazione f2;                       //esempio immissione dati num e den
    float num, den;

    printf("Immettere numeratore: ");
    scanf("%f", &num);
    do
    {
        printf("Immettere denominatore: ");
        scanf("%f", &den);
    } while (den == 0);   
    f2 = costruttoreFrazioneDatoDenENum(den, num);


    toStringValue(f1);
    toStringValueStorto(f1);
    toStringValue(f2);
    toStringValueStorto(f2);
    printf("---------------------\n");
       
    printf("SOMMMA\n");
    Frazione S;
    somma(&f1,&f2,&S);       //COSI È CON GESTIONE DI VARIABILI LOCALI // utilizzando il passaggio per riferimento...
    toStringValueStorto(S);

    printf("DIFFERENZA\n");
    Frazione diff=differenza(f1,f2);
    toStringValueStorto(diff);

    printf("DIVISIONE\n");
    Frazione div=divisione(f1,f2);
    toStringValueStorto(div);

    printf("MOLTIPLICAZIONE\n");
    Frazione mol=moltiplicazione(f1,f2);
    toStringValueStorto(mol);

}                   