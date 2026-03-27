#include <stdio.h>
#include <stdlib.h>

// Zadanie 2
int sum(int x, int y){
    return x + y;
}

int sumVals(int* x, int* y){
    return *x + *y;
}

void addPtr(int* x, int* y, int* z){
    *z = *x + *y;
}

// Zadanie 3
void copyInt(int x, int* w){
    *w = x;
}

// Zadanie 4
double findMax(const double* num1,double* const num2){
    if(*num1 > *num2){
        return *num1;
    }
    return *num2;
}

// Zadanie 5
int* initInts(){
    int* x = (int*)malloc(3 * sizeof(int));
    x[0] = 5;
    x[1] = -12;
    x[2] = 33;
    return &x[1];

}

// Zadanie 6
float* initFloats(){
    float* x = (float*)malloc(3 * sizeof(float));
    x[0] = 4.5;
    x[1] = 2.3;
    x[2] = -4.2;
    return x;
}

// Zadanie 7

// Zadanie 8

// Zadanie 9
void sqrCopy(const int* x, int* y){
    *y = *x * *x;
}

// Zadanie 10

// Zadanie 11

int main()
{
    // Zadanie 1
    /*
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(int*));
    return 0;
    */

    // Zadanie 2 - przypadki testowe
    /*
    int x = -2, y = 5, z = 0;
    printf("Wynik fukncji sum: \n%d + %d = %d\n", x, y, sum(x, y));
    printf("Wynik fukncji sumVals: \n%d + %d = %d\n", x, y, sumVals(&x, &y));
    addPtr(&x, &y, &z);
    printf("Wynik fukncji addPtr: \n%d + %d = %d\n", x, y, z);
    */

    // Zadanie 3 - przypadek testowy
    /*
    int x = 12, w = 0;
    printf("Wartosci przed wywolaniem funkcji: \nx = %d \nw = %d\n", x, w);
    copyInt(x, &w);
    printf("Wartosci po wywolaniu funkcji: \nx = %d \nw = %d\n", x, w);
    */

    // Zadanie 4 - przypadek testowy
    /*
    const double num1 = 3.5;
    double num2 = 4.3;
    printf("Podane liczby: \n%.2lf \n%.2lf\n", num1, num2);
    printf("Wieksza liczba: \n%.2lf", findMax(&num1, &num2));
    */

    // Zadanie 5 - przypadek testowy
    /*
    int* x = initInts();
    printf("Wartosci w zaalokowanej pamieci: \n%d \n%d \n%d \n", *(x - 1), *x, *(x + 1));
    free((x-1));
    */

    // Zadanie 6 - przypadek testowy
    /*
    float* x = initFloats();
    printf("Wartosci w zaalokowanej pamieci: \n%.2f \n%.2f \n%.2f \n", x[0], x[1], x[2]);
    free(x);
    */

    // Zadanie 7 - przeypadek testowy

    // Zadanie 9 - przypadek testowy
    /*
    const int x = 5;
    int y = 0;
    printf("Wartosci przed wywolaniem funkcji: \nx = %d \ny = %d\n", x, y);
    sqrCopy(&x, &y);
    printf("Wartosci po wywolaniu funkcji: \nx = %d \ny = %d\n", x, y);
    */


}
