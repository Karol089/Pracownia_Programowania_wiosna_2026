#include <stdio.h>
#include <stdlib.h>

// Petle czesc II
// Zadania od 10 do konca

int main()
{
    // Zadanie 10 (dzielniki liczby n)
    /*
    int n = 0;
    printf("Podaj liczbe calkowita do sprawdzenia: ");
    scanf("%d", &n);
    printf("\nDzielniki calkowite liczby %d to:\n", n);
    for(int i = 2; i < (n/2.0); i++) {
        if(n % i == 0) {
           printf("%d ; ", i);
        }
    }
    */


    // Zadanie 11 (suma cyfr)
    /*
    int n = 0, i = 1, suma_cyfr = 0;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);

    while(n > 0) {
        printf("%d\n", n % 10);
        suma_cyfr += n % 10;
        n = n / 10;
    }
    printf("Suma cyfr wynosi: %d",suma_cyfr);
    */


    // Zadanie 12 (euklides (NWD) odejmowanie)
    /*
    int a = 0, b = 0;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    printf("Najwiekszy wspolny dzielnik to: %d", a);
    */


    // Zadanie 13 (euklides (NWD) dzielenie)
    /*
    int a = 0, b = 0, r = 1;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    while(r != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("NWD dla tych liczb to: %d", a);
    */


    // Zadanie 14 (sprawdzanie czy pierwsza)
    /*
    int n = 0, sqrt_n = 0;
    int czy_pierwsza = 1;
    printf("Podaj liczbe calkowita do sprawdzenia: ");
    scanf("%d", &n);
    while(sqrt_n*sqrt_n < n) {
        sqrt_n++;
    }

    for (int i = 2; i < sqrt_n; i++) {
        if (n % i == 0) {
            czy_pierwsza = 0;
            break;
        }
    }

    if(czy_pierwsza) {
        printf("Liczba %d jest liczba pierwsza.", n);
    } else {
        printf("Liczba %d nie jest liczba pierwsza.", n);
    }
    */


    // Zadanie 15 (wydawanie reszty)
    /*
    int kwota = 0, m_5 = 0, m_2 = 0, m_1 = 0;
    printf("Podaj kwote do wydania: ");
    scanf("%d", &kwota);
    while (kwota >= 5) {
        m_5++;
        kwota -= 5;
    }

    while (kwota >= 2) {
        m_2++;
        kwota -= 2;
    }

    while (kwota >= 1) {
        m_1++;
        kwota -= 1;
    }

    printf("Podana reszte mozna wydac z pomoca %d piatek, %d dwojek i %d jedynek.", m_5, m_2, m_1);
    */


    // Zadanie 16 (przyblizenie pierwiastka)
    /*
    int a = 37;
    double x = a / 2.0;
    for (int i = 1; i < 11; i++) {
        x = (x + (a / x)) / 2;
    }
    printf("Przyblizony pierwiastek kwadratowy z liczby %d wynosi: %lf", a, x);
    */


    // Zadanie 17 (wartosci wielomianu - Horner)
    /*
    int stopien = 0;
    printf("Podaj stopien wielomianu: ");
    scanf("%d", &stopien);
    double wspolczynniki[stopien + 2], x = 0;

    printf("\nPodaj wartosc x: ");
    scanf("%lf", &x);

    printf("\nPodaj wspolczynniki wielomianu: \n");
    for (int i = 0; i <= stopien; i++) {
        scanf("%lf\n", &wspolczynniki[i]);
    }

    double wartosc = wspolczynniki[0];
    for (int i = 1; i < stopien; i++) {
        wartosc = (wartosc * x) + wspolczynniki[i];
    }

    printf("Wartosc wielomianu wynosi: %lf", wartosc);
    */

    return 0;
}
