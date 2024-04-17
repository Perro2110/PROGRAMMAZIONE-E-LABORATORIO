
#include<stdio.h>
#define DIM 10
int main(void){
    char s[DIM],s2[DIM];
    int i=0,j=0;
    int cont=0,l=0;
    scanf("%s%s",s,s2);
    while(s2[i]!='\0'){
        l++;
        i++;
    }
    i=0;
    while(s[i]!='\0'&&cont!=l){
        cont=0;
        while(s[i+cont]==s2[j]&&s[i+cont]!='\0'){
            j++;
            cont++;
        }
    i++;
    }
    if(l==cont)
        printf("pollooooooo");
    return 0;
}
