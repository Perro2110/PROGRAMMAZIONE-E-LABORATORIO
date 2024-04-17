//DI MARCO

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
    

/*
//Ricerca nella stringa di un char
#include<stdio.h>

#define DIM 10
int main(void){
    char s[DIM],sos[2];
    char pollo;
    int flag=0;
    int i=0;        
    printf("inserire stringa: e char\n");
    scanf("%s",s);
    scanf("%s",sos);
    pollo = sos[0];
    printf("%c",pollo);
    while(s[i]!='\0'){
        if(s[i]==pollo)
            flag++;
        i++;
    }
    if(flag!=0)
        printf("c'e");
    return 0;
    
}
*/
/*
//leggere una stringa e dire lunghezza
#include<stdio.h>
#define DIM 10
int main(void){
    char s[DIM];
    int i=0,som=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        som++;
        i++;
    }
    printf("%d",som);
}
*/
/*
//COPIA STRINGA IN STRINGA 2
#include<stdio.h>
#define DIM 10
int main(void){
    char s[DIM],s2[DIM];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        s2[i]=s[i];
        i++;
    }s2[i]='\0';
    printf("%s",s2);
}
*/
/*
//quale delle due vale di piu
#include <stdio.h>
#include<string.h>
#define DIM 10
int main(void){
    char s[DIM],s1[DIM];
    scanf("%s",s);
    scanf("%s",s1);
    int dif=0;
    int i=0,si=0,s1i=0;
    while(s[si]!='\0') 
        si++;
    while(s1[s1i]!='\0')
        s1i++;
    if(si>=s1i)
        while(s[i]!='\0'){
            if(s[i]<s1[i])
                dif--;
            if(s[i]>s1[i])
                dif++;
        i++; 
        }
    else
        while(s1[i]!='\0'){
            if(s[i]<s1[i])
                dif--;
            if(s[i]>s1[i])
                dif++;
        i++; 
        }
    if(dif==0)
        printf("UGUALI");
    else if(dif<0)
        printf("GROSSO s1: %s",s1);
    else
        printf("GROSSO s: %s",s);
    return 0;
}
*/
/*
//chi appare prima in ordine alfabetico
#include <stdio.h>
#include <string.h>
#define DIM 30
int main()
{
    char s1[DIM] = "Ferrara", s2[DIM] = "Ferrara";
    int i=0;
    
    //scanf("%s%s", s1, s2);
    
    while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0'){
            i++;
    }
    
    if(s1[i]<s2[i]){
        printf("%s è maggiore %s", s1, s2);
    }else if(s1[i]>s2[i]){
        printf("%s è maggiore %s", s2, s1);
    }else{
        printf("Sono uguali");
    }
    
    return 0;
}

*/