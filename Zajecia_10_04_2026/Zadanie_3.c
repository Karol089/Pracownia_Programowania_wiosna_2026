int sumSquares(unsigned int n, int* tab){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += tab[i]*tab[i];
    }
    return suma;
}
