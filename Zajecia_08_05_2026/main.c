#include <stdio.h>
#include <stdlib.h>

// Tablice "wielowymiarowe" (Tablice tablic)

// Zadania - deklaracje
int sumMatrix(int n, int m, int tab[n][m]); // 1
int sumArray(unsigned int n, unsigned int m, int** tab); // 2
int maxRowIdx(unsigned int n, unsigned int m, int **tab); // 3
int minColIdx(unsigned int n, unsigned int m, int **tab); // 4
void copyMat(unsigned int n, unsigned int m, int** copy, int** origin); // 5
void copyArr2D(unsigned int n, unsigned int m, int** copy, int** origin); // 6
void swapElems(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m]); // 7
void swapItems(unsigned int n, unsigned int m, int** tab1, int** tab2); // 8

int main()
{
    // Zadanie 1 - przypdaek testowy
    /*
    int tab[2][3] = {{1, 2, 3}, {3, 4, 5}};
    printf("Elementy tabicy:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("Suma:\n");
    printf("%d", sumMatrix(2, 3, tab));
    */

    // Zadanie 2 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab + r) + c) = (r + 1) * (c + 1);
        }
    }
    printf("Elementy tablicy:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(tab + i) + j));
        }
        printf("\n");
    }
    printf("Suma:\n");
    printf("%d", sumArray(2, 3, tab));
    */

    // Zadanie 3 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab + r) + c) = (r + 1) * (c + 1) * (-1);
        }
    }

    printf("Elementy tablicy:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(tab + i) + j));
        }
        printf("\n");
    }
    printf("Id wiersza zawierajacego najwieksza wartosc:\n");
    printf("%d", maxRowIdx(n, m, tab));
    */

    // Zadanie 4 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab + r) + c) = (r + 1) * (c + 1);
        }
    }
    *(*(tab) + 2) = -6;
    *(*(tab + 1) + 0) = -6;

    printf("Elementy tablicy:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(tab + i) + j));
        }
        printf("\n");
    }
    printf("Id kolumny zawierajacej najmniejsza wartosc:\n");
    printf("%d", minColIdx(n, m, tab));
    */

    // Zadanie 5 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab1 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab1[r] = (int*)malloc(m * sizeof(int));
    }
    int** tab2 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab2[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab2 + r) + c) = (r + 1) * (c + 1) * 2;
        }
    }

    copyMat(n, m, tab1, tab2);
    printf("Przekowiowane elementy:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", *(*(tab1 + row) + col));
        }
        printf("\n");
    }
    */

    // Zadanie 6 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab1 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab1[r] = (int*)malloc(m * sizeof(int));
    }
    int** tab2 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab2[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab2 + r) + c) = (r + 1) * (c + 1) * 2;
        }
    }

    copyArr2D(n, m, tab1, tab2);
    printf("Przekowiowane elementy:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", *(*(tab1 + row) + col));
        }
        printf("\n");
    }
    */

    // Zadanie 7 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int tab2[2][3] = {{2, 4, 6}, {8, 10, 12}};
    int tab3[2][3] = {{3, 6, 9}, {12, 15, 18}};

    swapElems(2, 3, tab2, tab3);

    printf("Po zamianie:\n");
    printf("Elementy tablicy tab2:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", tab2[row][col]);
        }
        printf("\n");
    }
    printf("Elementy tablicy tab3:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", tab3[row][col]);
        }
        printf("\n");
    }
    */


    // Zadanie 8 - przypdaek testowy
    /*
    unsigned int n = 2, m = 3; // deklaracje
    int** tab2 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab2[r] = (int*)malloc(m * sizeof(int));
    }
    int** tab3 = (int**)malloc(n * sizeof(int*));
    for(int r = 0; r < n; r++){
        tab3[r] = (int*)malloc(m * sizeof(int));
    }

    for(int r = 0; r < n; r++){ // wypelnianie
        for(int c = 0; c < m; c++){
            *(*(tab2 + r) + c) = (r + 1) * (c + 1) * 2;
        }
    }
    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            *(*(tab3 + r) + c) = (r + 1) * (c + 1) * 3;
        }
    }

    swapItems(n, m, tab2, tab3);

    printf("Po zamianie:\n");
    printf("Elementy tablicy tab2:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", *(*(tab2 + row) + col));
        }
        printf("\n");
    }
    printf("Elementy tablicy tab3:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", *(*(tab3 + row) + col));
        }
        printf("\n");
    }
    */

    return 0;
}
