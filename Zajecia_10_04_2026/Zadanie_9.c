int maxIdx(int n, int* tab){
    int maxId = 0;
    for(int i = 1; i < n; i++){
        if(tab[i] > tab[maxId]){
            maxId = i;
        }
    }
    return maxId;
}
