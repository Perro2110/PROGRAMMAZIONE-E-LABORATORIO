#include<stdio.h>
typedef long long int lintone;

int valoreAssoluto(int a){
return a>=0?a:-a;
}

lintone fact(int a){
    int p=1;
//**return(a==0)?1:a*fact(a-1);
    for(int i=a;i!=0;i--)
        p*=i;
    return p;
}

int main(void){
 int a=0,b;
 scanf("%d",&a);
 b=fact(a);
 printf("%d",b);
}