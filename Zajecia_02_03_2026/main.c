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

    // Zadanie 7
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    printf("Liczba %d miesci sie w liczbie %d dokladnie %d razy.", x2, x1, x1/x2);
    */


    // Zadanie 8
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    printf("Kwadrat roznocy podanych liczb wynosi: %d", (x1 - x2)*(x1 - x2));
    */


    // Zadanie 9
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    printf("Iloraz sumy podanych liczb przez ich roznice wynosi: %lf", (double)((x1 + x2)) / (x1 - x2));
    */


    // Zadanie 10
    /*
    int x1;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &x1);
    printf("%d + %d + %d = %d", x1, x1 + 1, x1 + 2, x1 + x1 + 1 + x1 + 2);
    */


    // Zadanie 11
    /*
    double x1 = 0.5, x2 = 2.7, x3 = 6.82;
    double srednia = (x1 + x2 + x3)/3;
    printf("Liczby: %lf, %lf, %lf \nSrednia: %lf", x1, x2, x3, srednia);
    */


    // Zadanie 12
    /*
    double a = 1.5, b = 2.2, c = 3.8;
    double wynik = 1 / ((1/a) + (1/b) + (1/c));
    printf("1 / ((1/%.2lf) + (1/%.2lf) + (1/%.2lf)) = %.5lf", a, b, c, wynik);
    */


    // Zadanie 13
    // w dalszej czesci nie rozumiem o co chodzi z "przyblizaniem"



    // Zestaw zadañ nr 3 (drugi link)
    // Zadanie 1
    /*
    int x1;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &x1);
    if(x1 > 0) {
        printf("Liczba jest dodatnia.");
    } else if(x1 < 0) {
        printf("Liczba jest ujemna.");
    } else {
        printf("Liczba jest zerem.");
    }
    */


    // Zadanie 2
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    if(x1 > x2) {
        printf("Wieksza liczba jest: %d", x1);
    } else if(x1 < x2) {
        printf("Wieksza liczba jest: %d", x2);
    } else {
        printf("Liczby sa sobie rowne");
    }
    */


    // Zadanie 3
    /*
    int stopien;
    printf("Podaj liczbe calkowita w skali 1-5: ");
    scanf("%d", &stopien);
    switch (stopien) {
        case 1:
        printf("niedostateczny");
        break;

        case 2:
        printf("dopuszczajacy");
        break;

        case 3:
        printf("dostateczny");
        break;

        case 4:
        printf("dobry");
        break;

        case 5:
        printf("bardzo dobry");
        break;

        default:
        printf("podany stoppien poza skala");
        break;
    }
    */


    // Zadanie 4
    /*
    int a, b, c;
    printf("Podaj trzy rozne liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c) {
        printf("Najwieksza z podanych liczb jest: %d", a);
    } else if(b > a && b > c) {
        printf("Najwieksza z podanych liczb jest: %d", b);
    } else {
        printf("Najwieksza z podanych liczb jest: %d", c);
    }
    */


    // Zadanie 5
    /*
    int rok;
    printf("Podaj rok: ");
    scanf("%d", &rok);
    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
        printf("Podany rok jest przestepny\n");
    } else {
        printf("Podany rok nie jest przestepny\n");
    }
    */


    // Zadanie 6
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    if((x1 + x2) % 2 == 0) {
        printf("Suma podanych liczb jest parzysta");
    } else {
        printf("Suma podanych liczb jest nieparzysta");
    }
    */


    // Zadanie 7
    /*
    double a, b, c;
    printf("Podaj trzy czynniki rownania kwadratowego (zmiennoprzecinkowe): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = (b*b) - 4*a*c;
    if(delta < 0) {
        printf("Brak rozwiazan rownania");
    } else if(delta > 0) {
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        printf("Pierwiastki rownania: \nx1 = %lf \nx2 = %lf", x1, x2);
    } else {
        double x1 = -b/(2*a);
        printf("Pierwiastek rownania: \nx = %lf", x1);
    }
    */


    // Zadanie 8
    /*
    int x1, x2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x1, &x2);
    (x1 >= x2) ? printf("Najwieksza liczba z podanych: %d", x1):printf("Najwieksza liczba z podanych: %d", x2);
    */


    // Zadanie 9
    /*
    int x1, x2, x3;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    if (x1 >= x2 && x1 >= x3) {
       printf("Najwieksza: %d", x1);
    } else if (x2 >= x1 && x2 >= x3) {
        printf("Najwieksza: %d", x2);
    } else {
        printf("Najwieksza: %d", x3);
    }
    */


    // Zadanie 10
    /*
    int x;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &x);
    (x % 2 == 0) ? printf("parzysta"):printf("nieparzysta");
    */


    // Zadanie 11
    /*
    double x1, x2;
    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    scanf("%lf %lf", &x1, &x2);
    if (x1 > x2) {
        printf("Wieksza z podanych liczb to: %.2lf", x1);
    } else if (x1 < x2) {
        printf("Wieksza z podanych liczb to: %.2lf", x2);
    } else {
        printf("Podane liczby sa sobie rowne");
    }
    */



    // Zadanie 12
    /*
    int wynik;
    printf("Podaj uzyskany wynik (0-100): ");
    scanf("%d", &wynik);
    if (wynik < 0 || wynik > 100) {
        printf("wynik poza zakresem");
    } else {
        if (wynik < 51) {
            printf("Niezdane");
        } else {
            printf("Zdane");
        }
    }
    */


    // Zadanie 13
    /*
    int rok;
    printf("Podaj rok: ");
    scanf("%d", &rok);
    ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) ? printf("Rok przestepny") : printf("Rok nieprzestepny");
    */

    return 0;
}
