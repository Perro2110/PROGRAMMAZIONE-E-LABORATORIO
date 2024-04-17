//amstrong 
#include <stdio.h>
#include  <math.h>

void main(){
    int n;
    int cifre =0;
    scanf("%d",&n);
    int somma = 0;
    int a = n;
    while(n!=0){ //per capire quante cifre ci sono in n
        cifre++;
        n/=10;
    }
    n=a;
    for(int i=0;i<cifre;i++){ //per n volte faccio la somma dell'unita al numero di cifre + la somma stessa
        somma += pow(a%10,cifre);
        a/=10;
    }
    if(somma == n) printf("Amstrong\n");
    else printf("Non Amstrong\n");
}

//euclide 
#include <stdio.h>
int main(){
 int a,b,q,r;
 do{
 scanf("%d%d",&a,&b);
 }while(b>=0&&a>b);
 while(b!=0){
   q=a/b;
   r=a%b;
   a=b*q+r;
   a=b;
   b=r;
 } printf("mcd: %d",a);
 }
