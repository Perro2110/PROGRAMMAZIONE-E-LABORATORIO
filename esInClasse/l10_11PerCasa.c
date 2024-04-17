/*ESERCIZIO_PER_CASA_CHE_NESSUNO_SI_RICORDAVA_CHE_ERA_DA_FARE.C*/

#include <stdio.h>
#include <math.h>
typedef unsigned long long int intone;

intone fact(int n){
    return (n>0)?n*fact(n-1):1;
}

void main(){
double x;
double sum = 0;
int mo=1;
scanf("%lf",&x);
for(int i=0;i<=9;i++){
sum+=mo*pow(x,(2*i+1))/fact(2*i+1);
mo=-mo;
}
printf("\n%lf",sum);
}


