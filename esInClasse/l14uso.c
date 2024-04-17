#include <stdio.h>
#define DIM 20
int main(void)
{
    int vet[DIM], vet2[31];
    int i = 0;
    int max = 0, min = 31, cont = 0;
    for (i = 0; i < DIM; i++)
        scanf("%d \n", &vet[i]);
    for (i = 0; i < 31; i++)
        vet2[i] = 0;
    for (i = 0; i < DIM; i++)
        vet2[vet[i]]++; 
    for (i = 0; i < DIM; i++)
        if (vet2[i] > max)
            max = vet[i];
    printf("%d \n", max);
    max = 0;
    for (i = 0; i < DIM; i++)
        if (vet[i] < min)
            min = vet[i];
    printf("%d \n", min);
    for (i = 0; i < DIM; i++)
        if (vet[i] > max)
            max = vet[i];
    printf("%d \n", max);
    for (i = 0; i < DIM; i++)
        cont += vet[i];
    printf("%d \n", cont / i);
}