/*
 Una temperatura in gradi Celsius si può convertire in una temperatura in gradi Fahrenheit dividendola per 5,
moltiplicando il risultato per 9 e aggiungendo 32 al risultato.
 Scrivere due funzioni, di nome celsiusToFahrenheit e fahrenheitToCelsius che convertano temperature Celsius in
temperature Fahrenheit e viceversa.
 Usarle per stampare a video due tabelle:
 una con le temperature Celsius da -100°C a 100°c, a intervalli di 10°C, e le corrispondenti temperature Fahrenheit
 una con le tempreature Fahrenheit da -100°F a 300°F, a intervalli di 20°F, e le corrispondenti temperature Celsius*/

#include <stdio.h>

int celsiusToFahrenheit(int i){
int sol=(((i/5)*9)+32);
return sol;
}
int fahrenheitToCelsius(int i){
int sol=(((i-32)*5)/9);
return sol;
}

void main(){
printf("le temperature Celsius da -100°C a 100°c, a intervalli di 10°C, e le corrispondenti temperature Fahrenheit \n");
for(int i=-100;i<=100;i+=10)
printf("%d : %d \n",i,celsiusToFahrenheit(i));

printf("le tempreature Fahrenheit da -100°F a 300°F, a intervalli di 20°F, e le corrispondenti temperature Celsius \n");
for(int i=-100;i<=300;i+=20)
printf("%d : %d \n",i,fahrenheitToCelsius(i));
}