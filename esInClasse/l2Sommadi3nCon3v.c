                           
#include <stdio.h>
void main(){
 int n,s;
 scanf("%d%d",&n,&s);
 n+=s;
 scanf("%d",&s);
 n+=s;
 printf("%d",n);
}

/*
 int n,som=0; //dichiarazione&inizializzazione
 for(int i=0;i!=3;i++){
    printf("immettere n \n");
    scanf("%d",&n);
    som+=n;
 }
 printf("somma: %d\n",som);
 */
