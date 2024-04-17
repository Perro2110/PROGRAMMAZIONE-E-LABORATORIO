// Scrivere un programma che generi e stampi un link casuale per una riunione Google
// Meet. pop-popo-pop
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    char pollo = 'a';

    srand(time(NULL));

    n = 3;
    char stringa[50] = {'h', 't', 't', 'p', 's', ':', '/', '/', 'm', 'e', 'e', 't', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'c', 'o', 'm', '/', '\0'};

    for (int j = 0; j < n; j++)
    {
        pollo = 'a';
        pollo += rand() % 25;
        i = 0;
        while (stringa[i] != '\0')
            i++;
        stringa[i] = pollo;
        stringa[i + 1] = '\0';
    }
    i = 0;
    while (stringa[i] != '\0')
        i++;
    stringa[i] = '-';
    n = 4;

    for (int j = 0; j < n; j++)
    {
        pollo = 'a';
        pollo += rand() % 25;
        i = 0;
        while (stringa[i] != '\0')
            i++;
        stringa[i] = pollo;
        stringa[i + 1] = '\0';
    }
    i = 0;
    while (stringa[i] != '\0')
        i++;
    stringa[i] = '-';
    n = 3;
    for (int j = 0; j < n; j++)
    {
        pollo = 'a';
        pollo += rand() % 25;
        i = 0;
        while (stringa[i] != '\0')
            i++;
        stringa[i] = pollo;
        stringa[i + 1] = '\0';
    }
    i = 0;
    while (stringa[i] != '\0')
        i++;
    printf("%s", stringa);
    return (0);
}