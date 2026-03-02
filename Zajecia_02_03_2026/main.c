#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // operacje arytmetyczne
    /*
    int a = 1;
    int b = 2;
    double c = 3.5;
    double d = 3.2;

    a = a + b;
    a += b;

    a = a - b;
    a -= b;

    a = a * b;
    a *= b;

    a = a / b;
    a /= b;

    a = a % b;
    a %= b;

    int i = 0;
    printf("%d \n", i++); // postinkrementacja
    printf("%d \n", i);
    printf("%d \n", ++i); // preinkrementacja
    printf("%d \n", i);
    // stosowane tylko do typow calkowitych
    // analogicznie dla dekrementacji (--i, i--)

    double s = 0.1 + 0.2;
    printf("0.1 + 0.2 = %.20lf\n", s);

    int x1 = 8;
    int x2 = 3;
    double x3 = (double)x1 / x2;
    printf("\n%lf\n", x3);
    */

    // operacje warunkowe
    /*
    double x1 = 0.1 + 0.2;
    double x2 = 0.3;
    double epsilon = 1e-9; // 1 * 10^(-9)
    if(fabs(x1 - x2) < epsilon){ // fabs() - wartosc bezwgledna float
        printf("prawidlowy wynik\n");
    } else if(fabs(x1 - x2) == epsilon){
        printf("roznica jest rowna dokladnie 0.000000001\n");
    } else {
        printf("nieprawidlowy wynik\n");
    }
    // && logiczne and
    // || liczne or

    int m = 5, n = 4;
    (m > n) ? printf("m jest wieksze od n czyli %d > %d", m, n):printf("n jest wieksze od m, czyli: %d > %d", n, m);
    */


    // Zbior zadan nr. 2 (pierwszy link)
    // Zadanie 1
    /*
    int x1 = (2 + 3) % 4;
    printf("Reszta z dzielenia: %d", x1);
    */

    // Zadanie 2
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    printf("%d - %d = %d", x1 * x1, x2 * x2, x1 * x1 - x2 * x2);
    */

    // Zadanie 3
    /*
    int x1 = 2, x2 = 3, x3 = 5;
    printf("(%d - %d) * %d = %d", x1, x2, x3, (x1 - x2) * x3);
    */

    // Zadanie 4
    /*
    int x1, x2, x3;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    double srednia = pow(x1 * x2 * x3, 1.0/3);
    printf("Srednia geometryczna podanych liczb wynosi: %lf", srednia);
    */

    // Zadanie 5
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    printf("Kwadrat sumy podanych liczb wynosi: %d", (x1 + x2) * (x1 + x2));
    */

    // Zadanie 6
    /*
    int x1, x2, x3;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("Suma kwadratów podanych liczb wynosi: %d", (x1*x1) + (x2 * x2) + (x3 * x3));
    */

    // reszta do dokonczenia we wlasnym zakresie


    // Zestaw zadañ nr 3 (drugi link)
    // zadania do dokonczenia we wlanym zakresie


    return 0;
}
