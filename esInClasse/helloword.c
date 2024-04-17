#include <stdio.h>
int main(void){
    int a=7;
    printf("************************\n");
    printf("CALCOLATORE DI TABELLINE\n");
    printf("************************\n");
    printf("Immettere valore:\n");
    scanf("%d",&a);
    printf("hai popo cliccato %d \n",a);
    for(int i=0;i<=10;i++)
        printf(" || %d || \n",(a*i)); 
//test vari
    printf(" || %d || \n",(a%3)); 
    printf(" || %d || \n",printf("pollo")+printf("pollo9")); 
    printf(" ||%d,%d,%d,%d|| \n",5*2,5+2,5-2,5%2); 

//Numeri primi prima di n 
int n;
int numero_controllato,resto=0;
int flag=0;
    printf("Immettere valore:\n");
    scanf("%d",&n);  
for(int i=n;i!=1;i--){ 
 numero_controllato=i; 
 for(int j=(numero_controllato-1);j!=1 && flag!=1;j--){
  resto=numero_controllato%j;
  if(resto==0)
   flag=1;
  } 
 if(flag==0)
  printf("||%d|| ",numero_controllato);
 else
  flag=0;
 }
 return 0;
}