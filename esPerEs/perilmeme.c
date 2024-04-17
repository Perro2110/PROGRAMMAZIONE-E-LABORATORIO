/*
In una piazza, n bambini si sono disposti in cerchio attorno a Babbo Natale in attesa di un regalo. Babbo Natale però è
avaro e decide di distribuire solamente n-1 doni, in un modo un po’ strano: scelto un bambino iniziale (per semplicità il
primo bambino), salta k-1 bambini raggiungendo così il k-esimo, al quale viene dato un dono.
 Il bambino, tutto contento, esce dal cerchio per lasciare la possibilità agli altri di ricevere un regalo.
 Di nuovo, Babbo Natale salta k-1 bambini e dona un regalo al k-esimo bambino, il quale, dopo aver ricevuto il regalo,
torna a casa.
 Il cerchio si stringe sempre di più finché i doni non finiscono ed un bimbo rimane senza regalo, il quale torna a casa
piangendo.
 Dati n e k, determinare la posizione del bambino che rimarrà senza regalo.
 Esempio: se ci sono n “ 5 bambini e k “ 2, l’ordine di distribuzione è 2, 4, 1, e 5 quindi il bambino senza regalo sarà il
numero 3.
*/
#include <stdio.h>
int main(void)
{
    int n, i, k, j, d = 0;
    printf("QUANTI BIMBI CI SONO:");
    scanf("%d", &n);
    scanf("%d", &k);
    int vet[n];
    for (int i = 0; i < n; i++)
        vet[i] = 0;
    j = k-1;
    for (i = 0; i < n-1;) 
    {
        if (vet[j] == 0)
        {
            i++;
            vet[j] = 1;
          
            if (j + k <= n)
                j += k-1;
            else
                j = (j + k) - n;
        }
        else
            j++;
    }
}
