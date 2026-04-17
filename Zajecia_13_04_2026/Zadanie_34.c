int countNegInt(unsigned int n, int tab[n]){
    int countNeg = 0;
    for(int i = 0; i < n; i += 2){
        if(tab[i] < 0){
            countNeg++;
        }
    }
    return countNeg;
}
