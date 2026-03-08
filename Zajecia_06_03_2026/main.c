#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // Przyklady z zajec
    /*
    int a = 6, b = 3; // a = 0b0110, b = 0b0011
    printf("%d\n", a & b); // AND - 0b0010 = 2
    printf("%d\n", a | b); // OR - ob0111 = 7
    printf("%d\n", a ^ b); // XOR - 0b0101 = 5
    printf("%d\n", ~a); // NOT - 0b111111...1001 = -7
    printf("%d\n", a << 2); // LEFT-SHIFT 0b011000
    printf("%d\n", a >> 2); // RIGHT-SHIFT 0b0001
    */

    // Zadania - praca wlasna
    // Zadanie 1 (zamiana miejscami)
    /*
    int x1 = 5, x2 = 8;
    x1 = x1 ^ x2;
    x2 = x1 ^ x2;
    x1 = x1 ^ x2;
    printf("%d : %d", x1, x2);
    */

    // Zadanie 2 (sprawdzanie parzystosci)
    /*
    int x1 = 157;
    if(x1 >> 1 << 1 == x1) {
        printf("parzysta");
    } else {
        printf("nieparzysta");
    }
    */

    // Zadanie 3 (wartosc bitu na danej pozycji)
    /*
    int x1 = 5, pozycja = 1;
    if ((1 << (pozycja-1) & x1) > 0) {
        printf("Bit na pozycji %d w zapisie dwojkowym liczby %d ma wartosc: 1\n", pozycja, x1);
    } else {
       printf("Bit na pozycji %d w zapisie dwojkowym liczby %d ma wartosc: 0\n", pozycja, x1);
    }
    */


    // Zadanie 4 (zeruj bit na okresolnej pozycji)
    /*
    int x1 = 8, pozycja = 3;
    x1 = x1 & (~(1 << (pozycja-1)));
    printf("%d", x1);
    */



    // Zadanie 5 (odwroc wszystkie bity)
    /*
    int x1 = 10;
    x1 = ~x1;
    printf("%d", x1);
    */


    // Zadanie 6 (przesuñ w lewo)
    /*
    int x1 = 10;
    x1 = x1 << 2;
    printf("%d", x1);
    */


    // Zadanie 7 (przesuñ w prawo)
    /*
    int x1 = 10;
    x1 = x1 >> 1;
    printf("%d", x1);
    */


    // Zadanie 8 (XOR)
    /*
    int x1 = 5, x2 = 7;
    printf("%d", x1 ^ x2);
    */


    return 0;
}
