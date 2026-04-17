void reverseArr(unsigned int n, int tab[n]){
    for(int i = 0; i < n/2; i++){
        tab[i] ^= tab[n-i-1];
        tab[n-i-1] ^= tab[i];
        tab[i] ^= tab[n-i-1];
    }
}
