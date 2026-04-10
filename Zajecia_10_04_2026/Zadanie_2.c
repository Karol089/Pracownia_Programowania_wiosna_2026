double average(unsigned int n, int* tab){
    double suma = 0.0;
    for(int i = 0; i < n; i++){
        suma += tab[i];
    }
    return (double)(suma) / (n);
}
