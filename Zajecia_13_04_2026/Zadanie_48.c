int sumEvenIndices(unsigned int n, int tab[n]){
    int sum = 0;
    for(int i = 0; i < n; i += 2){
        sum += tab[i];
    }
    return sum;
}
