#include<stdio.h>

void primi(int n){
int flag=0;
int i,j;
for (i=n;i!=1;i--){  
    for(j=2;j<i;j++)
        if(i%j==0)
            flag=1;
    if(flag==0)
        printf("||%d||",i);
    flag=0;
}
}
void main(){
int n;
scanf("%d",&n);
primi(n);
}
