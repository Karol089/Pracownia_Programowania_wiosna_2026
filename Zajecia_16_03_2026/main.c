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

    // Reszta zadan do dokonczenia

    return 0;
}
