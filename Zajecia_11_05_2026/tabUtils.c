int** myArrAlloc(unsigned int n, unsigned int m){
    int** tab = (int**)malloc(n * sizeof(int*));
    for(int row = 0; row < n; row++){
        *(tab + row) = (int*)malloc(m * sizeof(int));
    }
    return tab;
}

void myArrFill(unsigned int n,
               unsigned int m,
               int** tab,
               int scalar
               ){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            *(*(tab + row) + col) =
                (row + 1) * (col + 1) * scalar;
        }
    }
}

void myPrintArr(unsigned int n,
                unsigned int m,
                int** tab
                ){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", *(*(tab + row) + col));
        }
        printf("\n");
    }
}

void myPrintTab(unsigned int n,
                unsigned int m,
                int tab[n][m]
                ){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            printf("%d ", tab[row][col]);
        }
        printf("\n");
    }
}

void myFree2D(unsigned int n, unsigned int m, int** tab){
    for(int row = 0; row < n; row++){
        free(*(tab + row));
    }
    free(tab);
}
