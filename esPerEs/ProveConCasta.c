#include <stdio.h>
#define DIM 10
float radice3(float y);

void main()
{

    float vet[DIM];
    float vet2[DIM];
    int j=0;
    
    for (int i=0;i<DIM;i++)
    {
        scanf("%f", &vet[i]);
    }

    for (int i=0;i<DIM;i++)
    {
        if (radice3(vet[i])>1)
        {
            vet2[j]=radice3(vet[i]);
            j++;
        }
    }

    for (int i=0;i<j;i++)
    {
        printf("|| %.3f ||", vet2[i]);
    }
}

float radice3(float y)
{
    float a=1;
    float b=y;
    float x;
    do
    {
        x = (a+b)/2;
        if ((x*x*x)>y)
            b=x;
        else
            a=x;

    } while ((b-a)>0.00001);
    return x;
}