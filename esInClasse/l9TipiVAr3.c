#include <stdio.h>
void main () {
char c;
scanf("%c",&c);
if(c>=65 && c<91)
printf("MAIUSCOLO\n");
else if(c>=48 && c<58)
printf("NUM3R0\n");
else if(c>=97 && c<122)
printf("minuscolo\n");

for(c='a';c<='z';c++)
printf(" || %c || ",c);
}