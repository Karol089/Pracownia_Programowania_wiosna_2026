void revColsArr(unsigned int n, unsigned int m, int** tab){
    for(int row = 0; row < n/2; row++){
        int* temp = *(tab + row);
        *(tab + row) = *(tab + n - row - 1);
        *(tab + n - row - 1) = temp;
    }
}

void z12_test(){
    unsigned int n = 3, m = 2;
    int** tab = myArrAlloc(n, m);
    myArrFill(n, m, tab, 1);
    printf("Przed dzialniem funkcji:\n");
    myPrintArr(n, m, tab);

    revColsArr(n, m, tab);

    printf("Po dzialniu funkcji:\n");
    myPrintArr(n, m, tab);
}
