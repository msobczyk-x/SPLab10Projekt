#include <stdio.h>

void dodawanie();
void odejmowanie();
void mnozenie();
void dzielenie();


int main(){

    unsigned int wybor;
    printf("------Kalkulator------\n Wybierz:\n 1) Dodawanie\n 2) Odejmowanie\n 3) Mnożenie\n 4) Dzielenie\n Wybierz:");
    scanf("%u",&wybor);
    printf("\n");

    switch (wybor)
    {
    case 1:
        /* code */
        break;

    case 2:
        /* code */
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


}
void odejmowanie(){


}
void mnozenie(){
    int a,b,wynik;
printf("Podaj a i b:\n ");
scanf("%d",&a);
scanf("%d",&b);
wynik=a*b;
printf("%d * %d = %d\n",a,b,wynik);


}

void dzielenie() {
}
