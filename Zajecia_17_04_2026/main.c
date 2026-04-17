#include <stdio.h>
#include <stdlib.h>

    // Ten projekt zawiera zadania powtorzeniowe z zajec z dnia
    // 17-04-2026 wykonane w zakresie wlasnym z powodu
    // nieobecnosci na zajeciach

// Zadania - naglowki
void bitSwap(int* x, int* y); // 1
int bitIsEven(int x); // 2
void zeroAtId(int* x, unsigned int pozycja); // 3
void reverseArr(unsigned int n, int tab[n]); // 4
void printArrReversed(unsigned int n, int tab[n]); // 5


int main()
{
    // Zadanie 1
    /*
    int x = 5, y = 3;
    printf("Przed zamiana: \nx = %d y = %d\n", x, y);
    bitSwap(&x, &y);
    printf("Po zamianie: \nx = %d y = %d\n", x, y);
    */

    // Zadanie 2
    /*
    int x = 8;
    if(bitIsEven(x)){
        printf("Liczba %d jest parzysta.\n", x);
    } else {
        printf("Liczba %d jest nieparzysta.\n", x);
    }
    */

    // Zadanie 3
    /*
    int x = 5;
    int pozycja = 3;
    printf("Przed funkcja: \nx = %d", x);
    zeroAtId(&x, pozycja);
    printf("\nPo funkcji: \nx = %d", x);
    */

    // Zadanie 4
    /*
    int tab[5] = {1, 2, 3, 4, 5};
    int n  = sizeof(tab)/sizeof(int);
    printf("Tablica przed odwroceniem: \n");
    for(int i = 0; i < n; i++){
        printf("%d  ", tab[i]);
    }
    printf("\n\n");

    reverseArr(n, tab);

    printf("Tablica po odwroceniu: \n");
    for(int i = 0; i < n; i++){
        printf("%d  ", tab[i]);
    }
    printf("\n");
    */

    // Zadanie 5
    // Program pyta o podanie szostej pozycji ale nie umieszcza jej w
    // tablicy
    /*
    int tab[5];
    int x = 0;
    unsigned int n = sizeof(tab)/sizeof(int);
    printf("Podaj 5 liczb calkowitych do umieszczenia w tablicy: \n");
    for(int i = 0; i < n; i++){
        scanf("%d\n", &x);
        tab[i] = x;
    }
    printArrReversed(n, tab);
    */



    return 0;
}
