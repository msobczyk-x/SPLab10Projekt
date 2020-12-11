#include<stdio.h>

int main() {

printf("Wybierz działanie:\n1. dodawanie\n2. odejmowanie\n3. mnozenie\n4.dzielenie");
int dzialanie;

scanf("%d",& dzialanie);

float liczba1, liczba2;

printf("Podaj liczbę: ");
scanf("%f", &liczba1);

printf("Podaj liczbę: ");
scanf("%f", &liczba2);


switch(dzialanie){

case 1:
printf("%.3f", liczba1+liczba2)"
break;

case 2:
printf(".3f", liczba1-liczba2)"

