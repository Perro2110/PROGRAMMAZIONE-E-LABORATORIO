#include <stdio.h>
#define dim 5
void ellrip(int *vet, int *dl)
{
  int vet2[*dl - 2];
  int pollo;
  for (int i = 0; i < *dl; i++)
  {
    for (int j = *dl - 1; j > i; j--)
      if (vet[i] == vet[j])
      {
        pollo = vet[i];
      }
  }

  for (int j = 0, i = 0; i < *dl - 2; j++)
  {
    if (vet[j] != pollo)
    {
      vet2[i] = vet[j];
      i++;
    }
  }
  for (int j = 0, i = 0; i < *dl - 2; j++)
  {
    vet[i] = vet2[j];
    i++;
  }
  *dl -= 2;
}
void print(int * vet,int dl){
  for(int i=0;i<dl;i++)
    printf("|| %d ||",vet[i]);
}

int main(void)
{
  int dl=dim;
  int vet[dim]={1,4,2,3,2};
  ellrip(vet,&dl);
  print(vet,dl);
}




/*
  Dopo che indichi un puntatore: ciò che sta dentro al puntatore
  *VAR È la variabbile alla quale punta il puntatore ciò che è VAR è il puntatore
*/

void pollo3(char *pollo)
{
  printf("%s", pollo);
}

void keke(int *kik)
{
  for (int i = 0; i < 5; i++)
  {
    printf("%d", kik[i]);
  }
}

int main()
{
  int a = 1, b = 2;
  int *pa = &a, *pb = &b;
  char pollo2[100];
  int kik[5] = {1, 2, 3, 4, 5};
  keke(kik);
  scanf("%s", pollo2);
  pollo3(pollo2);
  pa = pb;                     // il puntatore di pa e = a quello di pb quindi indicano entrambi pb indi sia *pa che *bp sono indicatori di b
  printf("%d %d\n", *pa, *pb); // STAMPO//AGISCO CIO CHE STA DIETRO AI PUNTATORE NON LAVORA I PUNTATORI
  *pa = 3;                     // sto modificando cio che c'è dentro la variabile che ha l'indirizzo di pa... pa è indicatore di b
  printf("%d %d\n", *pa, *pb); // entrambi oviamente stampano b poiche sono entrambi indicatori di b
  return 0;
}

// LE FRECCETTE SONO INDISPENSABILI PERCHÈ NOI STIAMO LAVORANDO NON SUI PUNTATORI MA CON CIO CHE STA DENTRO

void somma(Frazione* f1,Frazione* f2,Frazione* S)
{
    *S=costruttoreFrazioneDatoDenENum((*f1).denominatore*f2->denominatore),(f1->numeratore*f2->denominatore)+(f2->numeratore*f1->denominatore));
}

/* -> e' equivalente a "(* )." */
