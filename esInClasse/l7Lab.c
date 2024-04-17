#include <stdio.h>
int divisori(int n);
void main(){
    int n,flag,j,count,k;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
    flag=0;
        if(n%i==0){
            for(j=1;j<=i;j++){
                if(i%j==0)
                    flag++;
            }
            if(flag==2){ 
                k=1;
                count=0;
                int n1=n;
                while(n1%i==0) {
                  n1=n1/i;
                  count++;
                 }
                printf("%d ^ %d \n",i,count);
            }
        }
    }

}