void revRows(unsigned int n, unsigned int m, int tab[n][m]){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m/2; col++){
            tab[row][col] ^= tab[row][m - col - 1];
            tab[row][m - col - 1] ^= tab[row][col];
            tab[row][col] ^= tab[row][m - col - 1];
        }
    }
}

void z9_test(){
    unsigned int n = 2, m = 3;
    int tab[2][3] = {{1, 2, 3},{6, 7, 8}};
    printf("Przed funkcja:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", tab[row][col]);
        }
        printf("\n");
    }

    revRows(n, m, tab);

    printf("Po funkcji:\n");
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", tab[row][col]);
        }
        printf("\n");
    }
}
