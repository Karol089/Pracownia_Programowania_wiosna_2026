int sumDivisible(
    unsigned int n,
    int tab[n],
    unsigned int divisor
){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % divisor == 0){
            sum += tab[i];
        }
    }
    return sum;
}
