#include <stdio.h>
void dodawanie(); void odejmowanie(); void mnozenie(); void dzielenie(); int main(){
    unsigned int wybor;
    printf("------Kalkulator------\n Wybierz:\n 1) Dodawanie\n 2) Odejmowanie\n 3) Mnożenie\n 4) 
Dzielenie\n Wybierz: ");
    scanf("%u",&wybor);
    printf("\n");
    switch (wybor)
    {
    case 1:
        dodawanie();
        break;
    case 2:
        odejmowanie();
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    default:
    printf("Nieprawidlowa liczba");
        break;
    }
    return 0;
}
void dodawanie(){
    float x, suma=0;
    while(1) {
        printf("Podaj liczbę (wciśnij 0, aby wyjść z programu): ");
        scanf("%f", &x);
        printf("\n");
        suma+=x;
        printf("%.3f\n\n", suma);
        if (x==0)
            break;
    }
}
void odejmowanie(){
 float x, roznica;
 printf("Podaj liczbę (wciśnij 0, aby wyjść z programu): ");
 scanf("%f", &x);
 printf("\n");
 
 roznica=x;
    while(1) {
        
        printf("Podaj liczbę (wciśnij 0, aby wyjść z programu): ");
        scanf("%f", &x);
        printf("\n");
        roznica=roznica-x;
        printf(" %.3f\n\n", roznica);
        if (x==0)
            break;
    }
}
void mnozenie(){
}
void dzielenie(){
}
