/*
    Valore seme
    1 ♥,
    2 ♦,
    3 ♣,
    4 ♠.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//numero carte nel mazzo
#define DIM 40

//definiamo bool
typedef enum
{
    false,
    true
} Bool;

int CartaInCima = 0;



// definizione ""oggetto"" Card
typedef struct
{
    int valore;
    int seme;
    Bool esiste;
} Card;

//definizione player
typedef struct
{
    int punti;
    Card Mano[10];
}Players;



// Creazione Mazzo
void Mazzo(Card *mazzo)
{
    int i = 0;
    int j = 0;
    int s = 0;
    int ga;
    int pla = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mazzo[s].seme = i + 1;
            mazzo[s].valore = j + 1;
            mazzo[s].esiste = true;
            s++;
        }
    }
}

// shuffle del mazzo
// scambia 2 carte casuali per 1000 volte
void shuffle(Card *mazzo)
{
    srand(time(NULL));
    int i;
    int r, r2;
    Card temp;
    for (i = 0; i < 1000; i++)
    {
        r = rand() % 40;
        r2 = rand() % 40;
        temp = mazzo[r];
        mazzo[r] = mazzo[r2];
        mazzo[r2] = temp;
    }
}

// estrae dal deck la prima carta
Card estraiP(Card *mazzo)
{
    int carta = CartaInCima++;
    return mazzo[carta];
}

// estrae la carta selezionata
Card estrai(Card *mazzo, int carta)
{
    if (mazzo[carta].esiste)
    {
        return mazzo[carta];
    }
    Card fake;
    fake.esiste = false;
    fake.seme = 0;
    fake.valore = 0;
    return fake;
}

// cheat per l'IA
int cit(Card *mazzo){
    return mazzo[CartaInCima].valore;
}

// conversione dei valori per sette e mezzo
float val7(int valore){
    return valore>7 ? 0.5 : valore; 
}

void settemezzo(Card *mazzo){
    system("clear");
    float punti = 0;
    float ptB = 0;
    int s;
    Card estratta;
    do{
        estratta = estraiP(mazzo);
        printf("Carta Estratta: %d %d\n", estratta.valore, estratta.seme);
        punti += val7(estratta.valore);
        printf("Punteggio: %.1f\n", punti);
        if (punti < 7.5){
            printf("Premi 0 per stare o altro per pescare: ");
            scanf("%d", &s);
        }
    }while (s && punti < 7.5);
    if (punti > 7.5){
        printf("Hai perso! Goglione! Idiota!........ rEnAtO\nIl banco ha vinto e tu hai perso ritardato!");
        return;
    }
    else{
        do{
            //'''''IA''''' per il mazziere
            if((ptB+val7(cit(mazzo)))>7.5) break;
            estratta = estraiP(mazzo);
            printf("Il banco ha estratto: %d %d\n", estratta.valore, estratta.seme);
            ptB += val7(estratta.valore);
            printf("Punteggio banco: %.1f\n", ptB);
            sleep(2);
        }while (ptB < 7.5);
    }
    if(punti<=ptB && ptB<8){
        printf("Il banco ha vinto e tu hai perso ritardato!\n");
        return;
    }
    printf("Hai vinto, incredibol iu ar not ANDICUPHEAD!!\n");
    return;
}

int calcolaPuntiBriscola(Card carta){
    if(carta.valore>=8) return carta.valore-6;
    if(carta.valore==1) return 11;
    if(carta.valore==3) return 10;
    return 0;
}

void azzeraCarta(Card *c){
    c->esiste = false;
    c->seme = 0;
    c->valore = 0;
}

void creazioneMano(Players *p,int dimMano){
    Card *c;
    for(int i=0;i<dimMano;i++){
        c = p->Mano;
        azzeraCarta(&c[i]);
    }
}

void printMano(Players p,int dimMano){
    printf("Punti: %d \n",p.punti);
    for (int i = 0; i < dimMano; i++){
        printf("Valore : %d  Seme : %d \n",p.Mano[i].valore,p.Mano[i].seme);
    }
    printf("\n");
}

/*void pesca(Players *p, int indice){
    Card c = p->Mano;
    *c[indice]
}*/
void briscola(Card *mazzo){
    Card Briscola;
    Briscola = estrai(mazzo,39);

    Card giocataP1;
    Card giocataP2;

    Players p1,p2;
    p1.punti =0;
    p2.punti=0;
    int dimMano = 3;
    int sceltaP,sceltaS;
    Players *primo = &p1 , *secondo = &p2;
    creazioneMano(&p1,dimMano);
    creazioneMano(&p2,dimMano);

    //printMano(p1,dimMano);
    //printMano(p2,dimMano);
    //sleep(10);
    do{
        system("clear");

        // i player pescano
        for(int i=0;i<dimMano;i++){
            if(!(*primo).Mano[i].esiste) (*primo).Mano[i] = estraiP(mazzo);
            if(!(*secondo).Mano[i].esiste) (*secondo).Mano[i] = estraiP(mazzo);
        }
        
        //printMano(p1,dimMano);
        //printMano(p2,dimMano);
        //sleep(10);
        printf("La Carta Briscola e': %d di %d\n",Briscola.valore,Briscola.seme);
        ((*primo)==p1))?printf("Turno P1:\n");
        printMano((*primo),dimMano);
        printf("Seleziona carta: ");
        scanf("%d",&sceltaP);

        system("clear");
        printf("La Carta Briscola e': %d di %d\n",Briscola.valore,Briscola.seme);
        printf("Turno P2:\n");
        printMano((*secondo),dimMano);
        printf("Seleziona carta: ");
        scanf("%d",&sceltaS);

        if(())
        sleep(1);
    }while(1);
}


/*

void scopa(Card *mazzo){
    system("clear");
    Bool finita=false;
    printf("A terra: \n");
    Card  aterra[DIM];
    int dima=0; //dimensioni carte a terra
    int dimpl1=0; //dimensione carte utente 1
    int dimpl2=0; //dimensione carte utente 2
    Card sceltaU1;
    Card sceltaU2;
    int trov=0;
    for(int i=0;i<4;i++){                                       //metto 4 carte a terra
        aterra[i] = estraiP(mazzo);                                 
        printf("Carta: %d %d\n",  aterra[i].valore, aterra[i].seme);
        dima++;
    }
    Players pl1,pl2;
    for(int i=0;i<3;i++,dimpl1++,dimpl2++){                             //player hanno pescato le prime 3 carte
        pl1.Mano[i]=estraiP(mazzo);
        pl2.Mano[i]=estraiP(mazzo);      
    }
    do{
      system("clear");
      for(int i=0;i<dima;i++)                                          //carte a terra
        printf("CARTA: %d %d \n",aterra[i].valore,aterra[i].seme);
      //TURNO PLAYER 1
      for(int i=0;i<dimpl1;i++) 
        printf("LE TUE CARTE PLAYER 1: %d %d \n",pl1.Mano[i].valore,pl1.Mano[i].seme);
     
      do{  
        do{
            printf("QUALE CARTA VUOI USARE DELLE TUE ?");
            scanf("%d%d",&sceltaU1.valore,&sceltaU1.seme);
            for(int i=0;i<dimpl1;i++)
                if(sceltaU1.valore==pl1.Mano[i].valore&&sceltaU1.seme==pl1.Mano[i].seme)
                    trov=1;
        }while(trov==0);

        for(int i=0;i<dima;i++) //per dimensione carte a terra 
            if(sceltaU1.valore==aterra[i].valore){
                pl1.punti++;
                aterra[i].valore=0;
                aterra[i].seme=0;
                aterra[i].esiste=false;
            }
                

      }while(1);




    }while(finita==false);    


}
*/
void main(void){

    int sceltagame = 0;
    Card mazzo[DIM];
    /*Card prova = estraiP(mazzo);

    int i;
    for(i=0;i<40;i++)
        printf("seme = %d || valore = %d || esiste? = %d\n",mazzo[i].seme,mazzo[i].valore,mazzo[i].esiste);

    printf("seme = %d || valore = %d\n",prova.seme,prova.valore);
*/
    /*
    do{
        printf("INSERIRE NUMERO DI GIOCATORI: ");
        scanf("%d",&pla);
    }while(pla<1||pla>4);

    */
    printf("Benvenuti giocatori sedetevi al tavolo \n cliccare un tasto per continuare...");
    getchar();

    do{
        system("clear");
        Mazzo(mazzo);
        shuffle(mazzo);

        printf("**********************\n");
        printf("*  SCEGLIERE GIOCO:  *\n");
        printf("*    0)Esci           *\n");
        printf("*    1)Sett'e mezzo   *\n");
        printf("*    2)Briscola       *\n");
        // printf("*    2)SCOPA         *\n");
        // printf("*    3)BHO           *\n");
        // printf("*    4)BHO           *\n");
        // printf("*    5)BHO           *\n");
        // printf("**********************\n");
        //
        scanf("%d", &sceltagame);
        switch (sceltagame)
        {
        case 1:
            system("clear");
            settemezzo(mazzo);
            break;
        case 2:
            system("clear");
            briscola(mazzo);
            break;
        default:
            printf("Sei triste non vuoi giocare a niente come chi studia tutto il giorno\n");
            getchar();
            return;
        }
       
    }while(sceltagame != 0);
}