void swapElems(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m]){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            tab1[row][col] = tab1[row][col] ^ tab2[row][col];
            tab2[row][col] = tab1[row][col] ^ tab2[row][col];
            tab1[row][col] = tab1[row][col] ^ tab2[row][col];
        }
    }
}
