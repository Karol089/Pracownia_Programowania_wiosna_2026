int sumOdd(unsigned int n, int tab[n]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 != 0){
            sum += tab[i];
        }
    }
    return sum;
}
