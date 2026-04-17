int sumDivisibleBy3(int n, int tab[n]){
    int sum3 = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 3 == 0){
            sum3 += tab[i];
        }
    }
    return sum3;
}
