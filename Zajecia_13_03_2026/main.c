#include <stdio.h>
#include <stdlib.h>
# include <math.h>

int main()
{
    // Zadanie 1
    /*
    for(int i = 1; i < 101; i++) {
        printf("%d ", i);
    }
    */


    // Zadanie 2
    /*
    int i = 1, n = 0, suma = 0;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    while(i < n+1) {
        suma += i++;
    }
    printf("Suma liczb od 1 do %d wynosi: %d", n, suma);
    */


    // Zadanie 3
    /*
    int n = 1, sum_minus = 0, sum_plus = 0;
    printf("Podawaj liczby calkowite do zsumowania (zero przerywa program)\n");
    do {
        scanf("%d", &n);
        if (n > 0) {
            sum_plus += n;
        } else {
            sum_minus += n;
        }
    } while(n != 0);
    printf("Suma liczb ujemnych: %d\nSuma liczb dodatnich: %d", sum_minus, sum_plus);
    */


    // Zadanie 4
    /*
    int n = 0, silnia = 1;
    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &n);
    for(int i = 1; i < n+1; i++) {
        silnia *= i;
    }
    printf("Silnia %d! wynosi: %d", n, silnia);
    */


    // Zadanie 5
    /*
    int n = 0, m = 1, i = 3;
    printf("Ciag Fibonacciego \n0 \n1\n");
    while(i < 11) {
       printf("%d\n", n + m);
       m += n;
       n = m - n;
       i++;
    }
    */


    // Zadanie 6 ( podloga pierwiastka)
    /*
    int n = 0, x = 0;
    printf("Podaj dodatnia liczbe calkowita do spierwistkowania: ");
    scanf("%d", &n);
    for (int i = 0; i < pow((double)(n), 1.0/2); i++) {
        x = i;
    }
    printf("Podloga pierwiastka z liczby %d wynosi: %d", n, x);
    */


    // Zadanie 7 (sufit pierwiastka)
    /*
    int n = 0, x = 0;
    printf("Podaj dodatnia liczbe calkowita do spierwistkowania: ");
    scanf("%d", &n);
    for (int i = 0; i < pow((double)(n), 1.0/2); i++) {
        x = i;
    }
    printf("Sufit pierwiastka z liczby %d wynosi: %d", n, x+1);
    */


    // Zadanie 8 (ciag 10 calkowitych)
    /*
    int ciag_a[11], licznik = 0;
    printf("Podaj 10 liczb calkowitych: \n");
    for(int i = 0; i < 9; i++) {
        scanf("%d\n", &ciag_a[i]);
    }

    for(int k = 1; k < 9; k++) {
        if (ciag_a[k] < (ciag_a[k-1] + ciag_a[k+1])/2.0) {
            licznik++;
        }
    }

    printf("Podana w zadaniu nierownosc spelnia %d elementow ciagu.", licznik);
    */


    // Zadanie 9 (ciag n liczb calkowitych) // blad w zliczaniu
    /*
    int n = 0, licznik = 0;
    printf("Podaj dlugosc ciagu (liczba dodatnia, calkowita): ");
    scanf("%d", &n);
    int ciag_a[n + 1];

    printf("Podaj %d liczb calkowitych: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d\n", &ciag_a[i]);
    }

    for(int k = 1; k < n - 1; k++) {
        if (ciag_a[k] < ((ciag_a[k-1] + ciag_a[k+1])/2.0)) {
            licznik++;
        }
    }

    printf("Podana w zadaniu nierownosc spelnia %d elementow ciagu.", licznik);
    */
    return 0;
}
