
/*
void logo(){
printf("*------------------*\n");
printf("*___1)3277467914___*\n");
printf("*___2)3277467825___*\n");
printf("*___3)3275454541___*\n");
printf("*------------------*\n");
}
void stronzo(){
 int scelta=0,flag; 
    do{ flag=1;
    do{
        logo();
        scanf("%d",&scelta);
        if(scelta>0&&scelta<4)
            flag=0;
        else
            printf("Numero : %d non compreso nella rubrica coglione\n",scelta);
    }while(flag!=0);
    printf("Sto chiamando CONTATTO: %d \n",scelta);
    }while(1);

}*/
/*
#include<stdio.h>

void star(int m,int n){
        for(int j=n;j!=0;j--){
        for(int i=m;i!=0;i--)
          printf("*");
        printf("\n");}

}



*/


int giuliano (int g,int m,int a){
  int N0,N1,N2,N3,jdGiorninato;
  N0=((m-14)/12);
  N1=((1461*(a+4800+N0))/4);
  N2=((367*(m-2-12*N0))/12);
  N3=((3*(a+4900+N0))/400);
  jdGiorninato=(N1+N2-N3+g-32075);
  return jdGiorninato;
}
int diffgg(int gg1,int gg2){ //inutile ma al prof piace 
    gg2-=gg1;
    return gg2;
}


void main(){
   int m,g,a,gg1,gg2,pollo;
   scanf("%d%d%d",&g,&m,&a);
   gg1=giuliano(g,m,a);
   scanf("%d%d%d",&g,&m,&a);
   gg2=giuliano(g,m,a);
   pollo=diffgg(gg1,gg2);
   printf("%d",pollo);
}