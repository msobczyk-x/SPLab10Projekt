#include <stdio.h>

void dodawanie(); void odejmowanie(); void mnozenie(); void dzielenie(); int main(){
    unsigned int wybor;
    printf("------Witamy w ULTRA ULTIMATE KALKULATORZE 2000!------\n Wybierz:\n 1) Dodawanie\n 2) Odejmowanie\n 3) Mnożenie\n 4) 
Dzielenie\n5. Niespodzianka\n Wybierz: ");
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
        mozenie();
        break;
    case 4:
        dzielenie();
        break;
	case 5:
	wiek();
	break;

    

    default:
    printf("Nieprawidlowa liczba");
        break;
    }


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
    int a,b,wynik;
printf("Podaj a i b:\n ");
scanf("%d",&a);
scanf("%d",&b);
wynik=a*b;
printf("%d * %d = %d\n",a,b,wynik);


}

void dzielenie(){
        int a,b,wynik;
printf("Podaj a i b:\n ");
scanf("%d",&a);
scanf("%d",&b);
wynik=a/b;
printf("%d / %d = %d\n",a,b,wynik);


}
void wiek() {
printf("Ile masz lat?");
int x;
scanf("%d", &x);
printf("Wow gratulacje, masz %d lat!", x);
}
