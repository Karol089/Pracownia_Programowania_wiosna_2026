#include <stdio.h>
#include <stdlib.h>

// Tablice tablic, czesc 2
// czesc 1 w pliku Zajecia_08_05_2026

// Funkcje wlasne z pliku tabUtils.c
// Deklaracje wymagane dla poprawnego dzialania projektu
int** myArrAlloc(unsigned int n, unsigned int m);
void myArrFill(unsigned int n, unsigned int m, int** tab, int scalar);
void myPrintArr(unsigned int n, unsigned int m, int** tab);
void myPrintTab(unsigned int n, unsigned int m, int tab[n][m]);
void myFree2D(unsigned int n, unsigned int m, int** tab);

// Zadania
void revRows(unsigned int n, unsigned int m, int tab[n][m]); //9
void z9_test();
void revRowsArr(unsigned int n, unsigned int m, int** tab); // 10
void z10_test();
void revCols(unsigned int n, unsigned int m, int tab[n][m]); // 11
void z11_test();
void revColsArr(unsigned int n, unsigned int m, int** tab); // 12
void z12_test();

int main()
{
    // Testy

    // Zadanie 9
    //z9_test();

    // Zadanie 10
    //z10_test();

    // Zadanie 11
    //z11_test();

    // Zadanie 12
    z12_test();

    return 0;
}
