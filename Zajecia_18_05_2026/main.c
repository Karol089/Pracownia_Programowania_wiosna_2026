#include <stdio.h>
#include <stdlib.h>

// Zlozone typy danych cz.2
// enums & unions
// plik zawiera zadania od 7 wzwyz
// poprzednie zadania w pliku Zajecia_15_05_2026

// czesc prezentacyjna
/*
enum Status{
    PENDING,
    PROCESSING,
    DONE,
    ERROR = -1,
};

union Liczba{
    int calkowita;
    double zmiennoprzecinkowa;
};
*/

void strCp(char* tab1, char* tab2){
    int i = 0;
    while(tab2[i] != 0){
        tab1[i] = tab2[i];
        i++;
    }
    tab1[i] = 0;
}

int strLen(char* tab){
    int i = 0;
    while(tab[i] != 0){
        i++;
    }
    return i;
}

// Zadania
void z7_test(); // 7
void z8_test(); // 8
void z9_test(); // 9
void z10_test(); // 10


int main()
{
    // czesc prezentacyjna
    /*
    int status = PENDING;
    printf("Status przed petla: %d\n", status);

    for(int i = 0; i < 10; i++){
        status = PROCESSING;
        printf("Status w petli %d: %d\n", i, status);
    }
    printf("\n");

    union Liczba liczba = {};
    liczba.calkowita = 3;
    printf("%d\n", liczba.calkowita);
    printf("%lf\n", liczba.zmiennoprzecinkowa);
    liczba.zmiennoprzecinkowa = 3.14;
    printf("%d\n", liczba.calkowita);
    printf("%lf\n", liczba.zmiennoprzecinkowa);
    */

    // Zadanie 7 - test
    //z7_test();

    // Zadanie 8 - test
    //z8_test();

    // Zadanie 9 - test
    //z9_test();

    // Zadanie 10 - test
    z10_test();

    return 0;
}
