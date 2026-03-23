#include <stdio.h>
#include <stdlib.h>

// Zadanie 1
void sumTwoNumbers(int x, int y) {
    printf("%d", x + y);
}

// Zadanie 2
double AbsoluteValue(double x){
    if (x < 0) {
        return -x;
    }
    return x;
}

// Zadanie 3
int calculateFactorial(unsigned int x) {
    int factorial = 1;
    for(int i = 2; i <= x; i++){
        factorial *= i;
    }
    return factorial;
}

// Zadanie 4
int sumNumbers(unsigned int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

// Zadanie 5
int sumSquares(unsigned int n) {
    int sum = 0;
    for(int i = 1; i <=n; i++) {
        sum += i*i;
    }
    return sum;
}

// Zadanie 6
double calcPowerOfTwo(int n) {
    if(n > 0) {
        return 2 << (n-1);
    }
    if(n == 0){
        return 1;
    }
    return 1.0 / (2 << (-n - 1));
}

// Zadanie 7
int calcSquareRootFloor(unsigned int n) {
    int root = 0;
    while(root*root <= n) {
        root++;
    }
    return root - 1;
}

// Zadanie 8
void countFunctionCalls(){
    static int count_calls = 0;
    printf("Funkcje wykonano %d razy.\n", ++count_calls);
}

// Zadanie 9
int calculateFactorialRecursively(unsigned int n) {
    if(n < 2) {
        return 1;
    }
    return n * calculateFactorialRecursively(n - 1);
}

// Zadanie 10
int calcFibonacciRecur(unsigned int n) {
    if(n < 2) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    return calcFibonacciRecur(n - 1) + calcFibonacciRecur(n - 2);
}

// Zadanie 11
int calcArithmSeqRecur(unsigned int n, int d) {
    if(n < 2) {
        return 1;
    }
    return calcArithmSeqRecur(n-1, d) + d;
}

// Zadanie 12
int calcGeoSeqRecur(unsigned int n, int d){
    if (n < 2) {
        return 1;
    }
    return d * calcGeoSeqRecur(n - 1, d);
}

// Zadanie 13
int calculate13(int n) {
    if(n < 2) {
        return 1;
    }
    return 2*calculate13(n-1) + 3;
}

// Zadanie 14
int calculate14(unsigned int n){
    if(n < 2) {
        return 2;
    }
    return 3 * calculate14(n - 1) - 1;
}
// Zadanie 15
int calculate15(unsigned int n){
    if (n == 2){
        return 2;
    }
    if (n < 2){
        return 1;
    }
    return calculate15(n - 1) + (2 * calculate15(n - 2));
}

// Zadanie 16
int calculate16(unsigned int n){
    if(n < 2){
        return 2;
    }
    if(n == 2){
        return 3;
    }
    return (2 * calculate16(n - 1)) + (3 * calculate16(n - 2));
}

// Zadanie 17
int calculate17(unsigned int n){
    if(n < 2){
        return 1;
    }
}

//Zadanie 18
int calculateGCD(unsigned int x, unsigned int y){
    if (x < y) {
        return calculateGCD(y, x);
    }
    if (x % y == 0) {
        return y;
    }
    return calculateGCD(y, x % y);
}

int main()
{
    // ostatnia cyfra indexu - 5

    // Zadanie 1 - test
    //sumTwoNumbers(5, 8);

    // Zadanie 2 - test
    //printf("%lf", AbsoluteValue(-2.54));

    // Zadanie 3 - test
    //printf("%d", calculateFactorial(7));

    // Zadanie 4 - test
    //printf("%d", sumNumbers(10));

    // Zadanie 5 - test
    //printf("%d", sumSquares(3));

    // Zadanie 6 - test
    //printf("%.2lf", calcPowerOfTwo(-2));

    // Zadanie 7 - test
    //printf("%d", calcSquareRootFloor(37));

    // Zadanie 8 - test
    /*
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    */

    // Zadanie 9 - test
    //printf("%d", calculateFactorialRecursively(7));

    // Zadanie 10 - test
    //printf("%d", calcFibonacciRecur(6));

    // Zadanie 11 - test
    //printf("%d", calcArithmSeqRecur(5, -2));

    // Zadanie 12 - test
    //printf("%d", calcGeoSeqRecur(5, 3));

    // Zadanie 13 - test
    //printf("%d", calculate13(4));

    // Zadanie 14 - test
    //printf("%d", calculate14(4));

    // Zadanie 15 - test
    //printf("%d", calculate15(6));

    // Zadanie 16 - test
    //printf("%d", calculate16(3));

    // Zadanie 17 - test
    //printf("%d", calculate17(3));

    // Zadanie 18 - test
    //printf("%d", calculateGCD(48, 64));

    return 0;
}
