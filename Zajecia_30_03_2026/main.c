#include <stdio.h>
#include <stdlib.h>

// Zadanie 12
float linFuncVal(const float* a, float* const b, const float* x){
    return (*a) * (*x) + (*b);
}

// Zadanie 13
int minPtr(int* a, int* b, int* c){
    if(*a < *b && *a < *c){
        return *a;
    }
    if(*b < *a && *b < *c){
        return *b;
    }
    return *c;
}

// Zadanie 14
double mulPtr(const double* num1, double* const num2){
    return (*num1 * *num2);
}

// Zadanie 15
void absVal(int* x){
    if(*x < 0){
        *x = -(*x);
    }
}

// Zadanie 16
void swap(int* ptr1, int* ptr2){
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}

// Zadanie 17
void swapSign(double* ptr1, double* ptr2){
    if (*ptr1 * *ptr2 < 0) {
        double tymczasowa = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tymczasowa;
    }
}


int main()
{
    // Wskazniki - czesc II
    // czesc I w pliku 27_03_2026
    // Zawiera zadania od 12 do 17

    // Zadanie 12 - przypadek testowy
    /*
    const float a = 2.2, x = 5.5;
    float b = 3.3;
    printf("Wartosc funkcji liniowej %.2fx + %.2f, dla x = %.2f wynosi:\n", a, b, x);
    printf("%.2f", linFuncVal(&a, &b, &x));
    */


    // Zadanie 13 - przypadek testowy
    /*
    int a = 5, b = 3, c = 2;
    printf("Liczby:\n %d ; %d ; %d \nNajmniejsza:\n %d", a, b, c, minPtr(&a, &b, &c));
    */

    // Zadanie 14 - przypadek testowy
    /*
    const double num1 = 3.5;
    double num2 = 2.0;
    printf("%.2lf * %.2lf = %.2lf", num1, num2, mulPtr(&num1, &num2));
    */

    // Zadanie 15 - przypadek testowy
    /*
    int x = -16;
    printf("Przed funkcja: \nx = %d\n", x);
    absVal(&x);
    printf("Po funkcji: \nx = %d\n", x);
    */

    // Zadanie 16 - przypadek testowy
    /*
    int a = 12, b = 18;
    printf("Przed zamiana: \na = %d \nb = %d\n", a, b);
    swap(&a, &b);
    printf("Po zamianie: \na = %d \nb = %d\n", a, b);
    */

    // Zadanie 17 - przypadek testowy
    /*
    double a = -1.2, b = 1.8;
    printf("Przed zamiana: \na = %.2lf \nb = %.2lf\n", a, b);
    swapSign(&a, &b);
    printf("Po zamianie: \na = %.2lf \nb = %.2lf\n", a, b);
    */

    return 0;
}
