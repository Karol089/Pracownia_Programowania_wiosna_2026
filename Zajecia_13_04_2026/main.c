#include <stdio.h>
#include <stdlib.h>

    // Ten plik zawiera zadania z dni 13-04-2026 (poniedzialek)
    // oraz 17-04-2026 (piatek) wykonane w zakresie wlasnym
    // w ramach odrabiania nieobecnosci na zajeciach

// zajecia 13-04-2026 - kontynuacja tablic
// Zadania - naglowki
void increaseByIndex(unsigned int n, int tab[n]); // 27
int sumDivisibleBy3(int n, int tab[n]); // 29
int sumDivisibleBy3(int n, int tab[n]); // 32
int countNegInt(unsigned int n, int tab[n]); // 34
int sumOdd(unsigned int n, int tab[n]); // 37
void decreaseBySquareId(unsigned int n, int tab[n]); // 39
int sumDivisible(unsigned int n, int tab[n], unsigned int divisor); // 44
int sumEvenIndices(unsigned int n, int tab[n]); // 48

int main()
{
    // Zadanie 27 - przypadek testowy
    /*
    int tab[5] = {1, 2, 3, 4, 5};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy przed funkcja: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    increaseByIndex(n, tab);

    printf("Zawartosc tablicy po funkcji: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    */

    // Zadanie 29 - przypadek testowy
    /*
    int tab[5] = {1, 2, 12, 13, 5};
    int n = sizeof(tab)/sizeof(int);
    int k = 4;
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    printf("Suma elemntow wiekszych od %d: \n", k);
    printf("%d\n", sumAboveThreshold(k, n, tab));
    */

    // Zadanie 32 - przypadek testowy
    /*
    int tab[5] = {3, 2, 2, 9, 15};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    printf("Suma elementow podzielnych przez 3: \n");
    printf("%d\n", sumDivisibleBy3(n, tab));
    */

    // Zadanie 34 - przypadek testowy
    /*
    int tab[7] = {3, -2, 2, -9, -15, 27, -18};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", tab[i]);
    }
    printf("\n\n");

    printf("Ilosc liczb ujemnych na parzystych indeksach: \n");
    printf("%d\n", countNegInt(n, tab));
    */

    // Zadanie 37 - przypadek testowy
    /*
    int tab[5] = {3, 2, 2, 9, 15};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    printf("Suma elementow nieparzystych: \n");
    printf("%d\n", sumOdd(n, tab));
    */


    // Zadanie 39 - przypadek testowy
    /*
    int tab[5] = {1, 2, 3, 4, 5};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy przed funkcja: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", tab[i]);
    }
    printf("\n\n");

    decreaseBySquareId(n, tab);

    printf("Zawartosc tablicy po funkcji: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", tab[i]);
    }
    printf("\n\n");
    */


    // Zadanie 44 - przypadek testowy
    /*
    int tab[5] = {3, 8, 2, 4, 15};
    unsigned int n = sizeof(tab)/sizeof(int);
    unsigned int divisor = 3;
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n");

    printf("Suma elementow podzielnych przez %d: \n", divisor);
    printf("%d\n", sumDivisible(n, tab, divisor));
    */

    // Zadanie 48 - przypadek testowy
    /*
    int tab[7] = {3, 2, 2, 9, 15, 27, 18};
    int n = sizeof(tab)/sizeof(int);
    printf("Zawartosc tablicy: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", tab[i]);
    }
    printf("\n\n");

    printf("Suma elemtnow o parzystych indeksach: \n");
    printf("%d\n", sumEvenIndices(n, tab));
    */

    return 0;
}
