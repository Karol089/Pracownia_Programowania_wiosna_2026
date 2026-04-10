#include <stdio.h>
#include <stdlib.h>

// Zadania - naglowki
void findMaxValue(int* numbers, unsigned int size);// 1
double average(unsigned int n, int* tab);// 2
int sumSquares(unsigned int n, int* tab);// 3
void copyArr(unsigned int n, int* tab1, int* tab2);// 4

// Tablice
int main()
{
    // element prezentacyjny z zajec
    /*
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    printf("\n");
    int tab[n];
    for(int i = 0; i < n; i++){
        tab[i] = i;
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", tab[i]);
    }
    printf("\n%d", sizeof(tab) / sizeof(int));
    //tab[0] = 1; tab[1] = 2; tab [2] = 3;
    //printf("%d \n%d\n", tab[4], 5[tab]);
    */

    // Zadanie 1 - przypadek testowy
    /*
    int tab[5] = {22, 12, 2, 53, 67};
    findMaxValue(tab, sizeof(tab));
    */

    // Zadanie 2 - przypadek testowy
    /*
    int tab[3] = {2, 4, 6, 8, 10};
    printf("%.2lf", average_own(sizeof(tab) / sizeof(int), tab));
    */

    // Zadanie 3 - przypadek testowy
    /*
    int tab[5] = {1, 3, 5};
    printf("%d\n", sumSquares(sizeof(tab) / sizeof(int), tab));
    */

    // Zadanie 4 - przydpaek testowy
    int tab1[3] = {1, 3, 5}, tab2[3];
    int n = sizeof(tab1)/sizeof(int);
    copyArr(n, tab1, tab2);
    for(int i = 0; i < n; i++){
        printf("%d\n", tab1[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", tab2[i]);
    }

}
