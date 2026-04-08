#include <stdio.h>
#include <stdlib.h>

// Zadanie 1
int operation(int number){
    return number;
}
int calculate(int (*operation)(int liczba), int number){
    return operation(number);
}

// Zadanie 2
int func(int x){
    return x;
}

void applyFunction(int (*func)(int), int start, int end){
    for(int i = start; i < end + 1; i++){
        printf("%d\n", func(i));
    }
}

// Zadanie 3
int change1(int x) {
    return x + 1;
}

int change2(int x) {
    return x * 3;
}

int sameSign(
            int (*change1)(int),
            int (*change2)(int),
            int n
){
    for(int i = 0; i < n + 1; i++){
        if (change1(i) * change2(i) < 0){
            return 0;
        }
    }
    return 1;
}

// Zadanie 4
double operation4(double x, double y){
    return x + y;
}

double calculateOperation(
            double (*operation4)(double, double),
            double number1,
            double number2
){
    return operation4(number1, number2);
}

// Zadanie 5
int modify(int x){
    return -x;
}

int modifyAndSum(int (*modify)(int), int number1, int number2){
    return modify(number1) + modify(number2);
}

// Zadanie 6
int condition(int x){
    if (x > 0){
        return 1;
    }
    return 0;
}

int action(int x){
    return x*x;
}

int applyCondition(
            int (*condition)(int),
            int (*action)(int),
            int value
){
    if (condition(value) == 1){
        return action(value);
    }
    return value;
}

// Zadanie 7
void operation7(int x){
    printf("%d\n", x*x);
}

void executeSequence(void (*operation)(int), int count){
    for(int i = 1; i < count + 1; i++){
        operation(i);
    }
}

// Zadanie 8
int modifier(){
    return 4;
}

int modifyValue(int (*modifier)(), int number){
    return number + modifier();
}

// Zadanie 9


int main()
{
    // Zadanie 1 - przypadek testowy
    /*
    int (*wsk_operation)(int number) = operation;
    printf("%d\n", calculate(operation, 3));
    */

    // Zadanie 2 - przypadek testowy
    //applyFunction(func, 5, 10);

    // Zadanie 3 - przypadek testowy
    //printf("%d\n", sameSign(change1, change2, 10));

    // Zadanie 4 - przypadek testowy
    //printf("%.2lf\n", calculateOperation(operation4, 2.5, 3.3));

    // Zadanie 5 - przypadek testowy
    //printf("%d\n", modifyAndSum(modify, 4, 3));

    // Zadanie 6 - przypadek testowy
    //printf("%d\n", applyCondition(condition, action, 6));

    // Zadanie 7 - przypadek testowy
    //executeSequence(operation7, 10);

    // Zadanie 8 - przypadek testowy
    //printf("%d\n", modifyValue(modifier, 5));



    return 0;
}
