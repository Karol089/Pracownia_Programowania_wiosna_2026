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

// Zadanie 6

// Zadanie 7

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

// Zadanie 11

// Zadanie 12
int calcGeoSeqRecur(int n, int d){
    if (n < 2) {
        return 1;
    }
    return d * calcGeoSeqRecur(n - 1, d);
}

// Zadanie 12

// Zadanie 13

// Zadanie 14

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

// Zadanie 17

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

    // Zadanie 8 - test
    /*
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    */

    // Zadanie 9 - test
    //printf("%d", calculateFactorialRecursively(7));

    // Zadanie 12 - test
    //printf("%d", calcGeoSeqRecur(5, 3));

    // Zadanie 15 - test
    //printf("%d", calculate15(6));

    // Zadanie 18 - test
    //printf("%d", calculateGCD(48, 64));

    return 0;
}
