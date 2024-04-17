#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[10];
    int c, som = 0;
    FILE *pf;
   pf=fopen("kiki.txt","a+"); // formato di read
    do
    {
        if (fscanf(pf, "%d", &c) != EOF) // END OF FILE
        {                                // fino a fine file
            printf("%d \n", c);          // legge è mem la c
            som += c;                    // SOM += c
        }                  
    } while (feof(pf) == 0); // SE FILE È FINITO == 0
    
    /* fclose(pf); */ //CHIUDO CONNESSIONE  
    
    printf("som: %d \n", som);

      //RIAPRO "CONNESSIONE" CON FILE  MA CON DIRITTI A+ (APPEND)
    char pollo[10];
    do{
        scanf("%s",pollo);
        fprintf(pf,pollo); //scrivo sul file alla quale punta pf la stringa pollo
        fprintf(pf," ");
    }while(strcmp(pollo,"fine")!=0);  //fino alla fine
}

