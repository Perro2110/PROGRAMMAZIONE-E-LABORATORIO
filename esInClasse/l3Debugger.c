#include<stdio.h>
void main(){
 int a,b,c;
  printf("inserisci a e b");
 scanf("%d%d",&a,&b);
 c=a+=b;
 printf("%d + %d = %d",a,b,c);
}
         //w gdb per singola linea
        //gcc -g per preparare a.out per debbuger
       // usare gdb <eseguibile>
      //poi comando run
     //list pe vedere cod
    //break <numero linea> si ferma prima della linea <numero linea>
   //continue per continuare 
  //next per fare passo per passo 
 //per vedere breakpoint comando " info breakpoint "
//per elliminare break point ad altezza line n usare comando "delete breakpoint <n.linea>"
