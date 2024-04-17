#include<stdio.h> //condizione ? VALORESETRUE : VALORESEFALSE;
void main(){
char c;
while(1){
scanf("%c",&c);
if(c>=97 && c<=122)
printf("%c",c-32);
else 
printf("%c",c);
}}