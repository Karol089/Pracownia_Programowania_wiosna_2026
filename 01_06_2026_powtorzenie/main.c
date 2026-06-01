#include <stdio.h>
#include <stdlib.h>

// Potworzenie wiadomowsci przed kolokwium 2

int myLen(char* myString){
    int i = 0;
    while(*(myString + i) != 0){
        i++;
    }
    return i;
}

// Zadanie 1
char* copyEveryThird(char* napis){
    char* nowy = (char*)malloc(sizeof(char) * (myLen(napis)/3 + 1));

    int i = 0, x = 0;
    while(*(napis + i) != 0){
        if((i+1) % 3 == 0){
            *(nowy + x) = *(napis + i);
            *(nowy + x + 1) = '\0';
            x++;
        }
        i++;
    }
    return nowy;
}

// Zadanie 2
unsigned int strDig(char* myString){
    int i = 0, x = 0;
    while(*(myString + i) != 0){
        if(*(myString + i) <= 57 && *(myString + i) >= 48){
            x += 2;
        } else{
            x++;
        }
        i++;
    }
    return x;
}

// Zadanie 3
void flipDiag(int n, int m, int tab[n][m]){
    if(n != m){
        printf("Macierz powinna byc kwadratowa");
        return;
    }

    int row = 0, col = 0;
    while(row < (n/2)){
        int temp = *(*(tab + row) + col);
        *(*(tab + row) + col) = *(*(tab + n - row - 1) + m - col - 1);
        *(*(tab + n - row - 1) + m - col - 1) = temp;
        /*
        int temp = tab[row][col];
        tab[row][col] = tab[n - row - 1][m - col -1];
        tab[n - row - 1][m - col -1] = temp

        // tab[n - row - 1] == *(*(tab + n - row - 1)
        */

        row++;
        col++;
    }
}

void printArr(unsigned int n, unsigned int m, int tab[n][m]){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ",tab[row][col]);
        }
        printf("\n");
    }
}

// Zadanie 4
void transpose(unsigned int n, unsigned int m, int tab[n][m]){
    for(int row = 0; row < n; row++){
        for(int col = row + 1; col < n; col++){
            int temp = tab[row][col];
            tab[row][col] = tab[col][row];
            tab[col][row] = temp;
        }
    }
}


int main()
{
    // Zadanie 1
    /*
    char* napis = "Zadanie powtorzeniowe\0";
    printf("%s\n", napis);
    char* nowy = copyEveryThird(napis);
    printf("%s\n", nowy);
    */

    // Zadanie 2
    /*
    char* napis1 = "Zadanie";
    char* napis2 = "Zadanie 1234";
    printf("%d\n", strDig(napis1));
    printf("%d\n", strDig(napis2));
    */

    // Zadnaie 3
    /*
    int tab[3][3] = {{2, 3, -3}, {1, 4, 7}, {-3, -6, 11}};
    printArr(3, 3, tab);
    flipDiag(3, 3, tab);
    printf("\n");
    printArr(3, 3, tab);
    */

    // Zadanie 4
    int tab[3][3] = {{2, 3, -3}, {1, 4, 7}, {6, 8, 10}};
    printArr(3, 3, tab);
    transpose(3, 3, tab);
    printf("\n");
    printArr(3, 3, tab);


    return 0;
}
