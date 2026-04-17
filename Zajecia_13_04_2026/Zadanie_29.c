int sumAboveThreshold(int k, unsigned int n, int tab[n]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > k){
            sum += tab[i];
        }
    }
    return sum;
}
