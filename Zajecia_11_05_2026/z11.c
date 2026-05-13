void revCols(unsigned int n, unsigned int m, int tab[n][m]){
    for(int col = 0; col < m; col++){
        for(int row = 0; row < n/2; row++){
            tab[row][col] ^= tab[n - row - 1][col];
            tab[n - row - 1][col] ^= tab[row][col];
            tab[row][col] ^= tab[n - row - 1][col];
        }
    }
}

void z11_test(){
    int tab[4][2] = {{1, 2}, {3, 4}, {-5, -6}, {-7, -8}};
    printf("Przed dzialniem funkcji:\n");
    myPrintTab(4, 2, tab);

    revCols(4, 2, tab);

    printf("Po dzialniu funkcji:\n");
    myPrintTab(4, 2, tab);
}
