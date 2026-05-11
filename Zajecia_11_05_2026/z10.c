void revRowsArr(unsigned int n, unsigned int m, int** tab){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m/2; col++){
            *(*(tab + row) + col) ^= *(*(tab + row) + m - col - 1)];
            *(*(tab + row) + m - col - 1)] ^= *(*(tab + row) + col);
            *(*(tab + row) + col) ^= *(*(tab + row) + m - col - 1)];
        }
    }
}

void z10_test(){
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
}
