/*
Leggere da tastiera due numeri interi, n ≤100 e k ≤ n.

 Successivamente prendere in ingresso un array di interi di dimensione n, compresi tra 0 e k - 1.

 Sviluppare una funzione che trovi il valore che si ripete più volte nell’array ed il numero di ripetizioni.
Implementare almeno una funzione occorrenze che abbia almeno come parametro l’array inserito e che calcoli
l’elemento che si ripete più volte e il numero di occorrenze (poiché una funzione può avere solamente un valore
di ritorno, uno dei due valori deve essere passato per riferimento...).
 Per esempio, per n=12, k = 10 e arr = {2, 2, 2, 0, 2, 0, 2, 8, 0, 9, 2, 3}, la funzione calcola 2 (elemento che si ripete
più volte) e 6 (numero di occorrenze).
*/
#include <stdio.h>
#define DIM 100
void funz(int *vet2, int k, int *max, int *ind)
{
    int i = 0;

    for (i = 0; i < k; i++)
        if (*max < vet2[i])
        {
            *max = vet2[i];
            *ind = i;
        }
    printf("%d %d", *max, *ind);
}

int main(void)
{
    int n, k, j;
    do
    {
        scanf("%d", &n);
    } while (n >= 100);
    int vet[n];

    do
    {
        scanf("%d", &k);
    } while (k >= n);
    int vet2[k];

    int i;
    for (i = 0; i < n; i++)
        do
        {
            scanf("%d", &vet[i]);
        } while (vet[i] > k);

    for (i = 0; i < n + 1; i++)
    {
        vet2[vet[i]]++;
    }
    int max = -999;
    int ind;
    funz(vet2,k,&max,&ind);
}
