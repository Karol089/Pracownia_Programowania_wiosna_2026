int minIdxMax(int n, int* tab){
    int minId = 0;
    for(int i = 1; i < n; i++){
        if(tab[i] <= tab[minId]){
            minId = i;
        }
    }
    return minId;
}
