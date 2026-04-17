void zeroAtId(int* x, unsigned int pozycja){
    *x = *x & (~(1 << pozycja - 1));
}
