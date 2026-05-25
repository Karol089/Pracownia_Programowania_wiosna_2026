#include <stdio.h>
#include <stdlib.h>

// Listy jednokierunkowe
void tutorial(); // czesc prezentacyjna

// stosowana struktura
struct elementM {
    int x;
    struct elementM* next;
};

// Utils
void printNoHead(struct elementM* myList){
    struct elementM* temp = myList;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
}

void printHead(struct elementM* myHeadList){
    struct elementM* temp = myHeadList->next;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
}

// Zadanie 3
void printListWithoutHead(struct elementM* myList){
    if(myList != NULL){
        struct elementM* temp = myList;
        while(temp != NULL){
            printf("%d\n", temp->x);
            temp = temp->next;
        }
        free(temp);
    } else {
        printf("Lista jest pusta\n----------\n");
    }

}

// Zadanie 4
void printListWithHead(struct elementM* myListHead){
    if(myListHead->next != NULL){
        struct elementM* temp = myListHead->next;
        while(temp != NULL){
            printf("%d\n", temp->x);
            temp = temp->next;
        }
        free(temp);
    } else {
        printf("Lista jest pusta\n----------\n");
    }
}

// Zadanie 5
void printPos(struct elementM* myList){
    struct elementM* temp = myList;
    while(temp != NULL){
        if(temp->x > 0){
           printf("%d\n", temp->x);
        }
        temp = temp->next;
    }
    return;
}

// Zadanie 6
void printOdd(struct elementM* myHeadList){
    struct elementM* temp = myHeadList->next;
    while(temp != NULL){
        if(temp->x % 2 != 0){
           printf("%d\n", temp->x);
        }
        temp = temp->next;
    }
    return;
}

// Zadanie 7
struct elementM* createNoHead(){
    struct elementM* myNoHead = malloc(sizeof(struct elementM));
    return myNoHead;
}

// Zadanie 8
struct elementM* createWithHead(){
    struct elementM* myHead = malloc(sizeof(struct elementM));
    myHead->next = NULL;
    return myHead;
}

// Zadanie 9
void addFirst(struct elementM** myList, int a){
    struct elementM* newElem = malloc(sizeof(struct elementM));
    newElem->x = a;
    newElem->next = *myList;
    *myList = newElem;
    return;
}


int main()
{
    //do testow
    struct elementM* myEmpty = NULL;
    struct elementM* myEmptyHead = malloc(sizeof(struct elementM));
    myEmptyHead->next = NULL;


    // Zadanie 1
    struct elementM* myList = NULL;
    struct elementM noHead3 = {-12, NULL};
    struct elementM noHead2 = {5, &noHead3};
    struct elementM noHead1 = {4, &noHead2};
    myList = &noHead1;
    /*
    struct elementM* temp = myList;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    */

    // Zadanie 2
    struct elementM* myHeadList = malloc(sizeof(struct elementM));
    myHeadList->next = NULL;
    struct elementM myHead1 = {-12, NULL};
    struct elementM myHead2 = {5, &myHead1};
    struct elementM myHead3 = {4, &myHead2};
    myHeadList->next = &myHead3;
    /*
    struct elementM* temp = myHeadList->next;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    */

    // Zadanie 3 test
    /*
    struct elementM* myList = NULL;
    printListWithoutHead(myList);
    struct elementM* x1 = malloc(sizeof(struct elementM));
    x1->x = 12;
    x1->next = NULL;
    myList = x1;
    printListWithoutHead(myList);
    */

    // Zadanie 4 test
    /*
    struct elementM* myList = malloc(sizeof(struct elementM));
    myList->next = NULL;
    printListWithHead(myList);
    struct elementM* x1 = malloc(sizeof(struct elementM));
    x1->x = 12;
    x1->next = NULL;
    myList->next = x1;
    printListWithHead(myList);
    */

    // Zadanie 5 test
    //printPos(myList); // deklaracja listy - linijka 64

    // Zadanie 6 test
    //printOdd(myList); // deklaracja listy - linijka 90

    // Zadanie 7 test
    /*
    struct elementM* testNoHead = createNoHead();
    struct elementM test7 = {12, NULL};
    testNoHead = &test7;
    printf("%d\n", testNoHead->x);
    */


    // Zadanie 8 test
    /*
    struct elementM* testWithHead = createWithHead();
    struct elementM test7 = {12, NULL};
    testWithHead->next = &test7;
    printf("%d\n", testWithHead->next->x);
    */

    // Zadanie 9 test
    /*
    printf("Przed dodaniem elementu:\n");
    printNoHead(myList);
    printf("%p\n", myList);

    addFirst(&myList, 18);

    printf("\nPo dodaniu elementu:\n");
    printNoHead(myList);
    printf("%p\n", myList);
    */

    return 0;
}
