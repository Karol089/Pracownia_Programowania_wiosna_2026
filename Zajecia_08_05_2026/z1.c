int sumMatrix(unsigned int n, unsigned int m, int tab[n][m]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += tab[i][j];
        }
    }
    return sum;
}
