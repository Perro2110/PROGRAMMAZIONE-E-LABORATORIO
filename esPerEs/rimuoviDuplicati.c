/*
 Leggere da tastiera due array di char di al più 100 elementi.
 Sviluppare una funzione rimuoviDuplicati che, presi in ingresso i due array inseriti da tastiera, rimuova tutte le
occorrenze di ciascuna lettera del secondo array dal primo array e che abbia come valore di ritorno il numero di
caratteri eliminati.
 Esempio:
a1 = ’parolalunghissima’ (NB. senza spazi)
a2 = ’la’
risultato = ’prounghissim’
eliminati = ’5’
*/

#include <stdio.h>
#define DIM 100

void rimuoviduplicati(char *s1, char *s2)
{

    int numCar = 0, count = 0;
    int i = 0, j = 0;
    while (s2[i] != '\0')
    {
        numCar++;
        i++;
    }
    i = 0;
    while (i != numCar)
    {
        j = 0;
        while (s1[j] != '\0')
        {
            if (s1[j] == s2[i])
            {
                s1[j] = '9';
                count++;
            }
            j++;
        }
        i++;
    }

    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != '9')
            printf("%c", s1[i]);
        i++;
    }
    printf("\nNumero di caratteri rimossi: %d \n", count);
}

int main(void)
{
    char s1[DIM];
    char s2[DIM];
    scanf("%s", s1);
    getchar();
    scanf("%s", s2);

    rimuoviduplicati(s1, s2);
}