void decreaseBySquareId(unsigned int n, int tab[n]){
    for(int i = 1; i < n; i++){
        tab[i] -= i*i;
    }
}
