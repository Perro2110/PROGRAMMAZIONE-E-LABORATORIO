#include <stdio.h>
#include <math.h> //gcc nome.c -lm
void main(){
double a=2;
double x=1;
double p;
p=sqrt(a);
printf("%lf",p);
while(x!=p)
x=((x+(a/x))/2);
printf("%.15lf",x*x);
}