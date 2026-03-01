#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* czesc demostracyjna (podane przez profesora)

    int liczbaCalkowita = 125;
    int liczba2 = 45;
    int liczba3;

    char napis[25];
    printf("%d\n", &liczba3); // &liczba3 jest wskaznikiem na miejsce w pamieci
    printf("Podaj liczbe: ");
    scanf("%d", &liczba3); // scanf przejmuje miejsce w pamieci, a nie nazwe zmiennej
    printf("liczba: %d, druga liczba: %d", liczbaCalkowita, liczba2); // %d formatuje uzycie liczby

    printf("\nPodaj napis (max 24 znaki): ");
    scanf("%24s", napis); // nazwa tablicy (bez odniesienia do indeksu) jest jej adresem
                          // %24s ogranicza podany napis do 24 znakow
    printf("%s", napis);
    printf("\n\nTak wypisujemy znak \\ (backslash)");
    printf("\nTak wypisujemy tabulacje \t");
    // pobieranie napisu konczy sie na bialych znakach
    return 0;

    */

    // zadanie pierwsze (przyjmij i wyswietl liczbe)
    /*
    int liczba_calkowita_1;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba_calkowita_1);
    printf("%d", liczba_calkowita_1);
    */

    // zadanie drugie (roznica dwoch zmiennoprzecinkowych)
    /*
    double liczba1;
    double liczba2;
    double wynik;
    printf("Podaj pierwsza liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba1);
    printf("Podaj druga liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba2);
    wynik = liczba1 - liczba2;
    printf("%lf", wynik);
    */

    // zadanie trzecie (rok o jeden mniejszy od podanego);
    /*
    int rok_urodzenia;
    printf("Podaj swoj rok urodzenia: ");
    scanf("%d", &rok_urodzenia);
    printf("%d", rok_urodzenia - 1);
    */

    // Zadanie czwarte (srednia z trzech liczb)
    /*
    int liczba1;
    int liczba2;
    int liczba3;
    double srednia;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &liczba1, &liczba2, &liczba3);
    srednia = (liczba1 + liczba2 + liczba3)/3;
    printf("Srednia wynosi: %lf", srednia);
    */

    // zadanie piate (litery na odwrot)
    /*
    char dwie_litery[3];
    printf("Podaj dwie litery: ");
    scanf("%2s", dwie_litery);
    printf("%c%c", dwie_litery[1], dwie_litery[0]);
    */

    // zadanie 6 (podwojenie liczby zmiennoprzecinkowej)
    /*
    double liczba1;
    printf("Podaj liczbe do podwojenia: ");
    scanf("%lf", &liczba1);
    liczba1 = liczba1 * 2;
    printf("Podwojona liczba: %lf", liczba1);
    */


    // Zadanie 7 (dolary na euro)
    /*
    double kwota_dolary;
    printf("Podaj kwote w dolarach: ");
    scanf("%lf", &kwota_dolary);
    printf("Kwota w euro: %lf", (kwota_dolary * 0.85));
    */


    // Zadanie 8 (cytat)
    /*printf("To jest cytat: \"Czesto uzywam jezyka C\"");*/


    // Zadanie 9 (wyswietlanie sciezki)
    /*printf("C:\\ProgramFiles\\MojaAplikacja\\");*/


    // Zadanie 10 (specjalne znaki)
    /*printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\\\ (ukosnik wsteczny)");*/
}
