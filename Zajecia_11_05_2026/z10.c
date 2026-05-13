void revRowsArr(unsigned int n, unsigned int m, int** tab){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m/2; col++){
            *(*(tab + row) + col) ^= *(*(tab + row) + m - col - 1);
            *(*(tab + row) + m - col - 1) ^= *(*(tab + row) + col);
            *(*(tab + row) + col) ^= *(*(tab + row) + m - col - 1);
        }
    }
}

void z10_test(){
    unsigned int n = 3, m = 4;
    int** tab = myArrAlloc(n, m);
    myArrFill(n, m, tab, 1);
    printf("Przed dzialniem funkcji:\n");
    myPrintArr(n, m, tab);

    revRowsArr(n, m, tab);

    printf("Po dzialniu funkcji:\n");
    myPrintArr(n, m, tab);
}
