#include <stdio.h>
#include <stdlib.h>

// Listy jednokierunkowe
void tutorial(); // czesc prezentacyjna

//Zadanie 1
struct elementM {
    int x;
    struct elementM* next;
};

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
void printPos(){
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
    struct elementM temp = x1;
    while(&temp != NULL){
        printf("%d\n", temp.x);
        temp = *temp.next;
    }
    */

    // Zadanie 2
    /*
    struct elementM myList;
    myList.next = NULL;
    struct elementM x1 = {-12, NULL};
    struct elementM x2 = {5, &x1};
    struct elementM x3 = {4, &x2};
    myList.next = &x3;
    struct elementM temp = *myList.next;
    while(&temp != NULL){
        printf("%d\n", temp.x);
        temp = *temp.next;
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






    return 0;
}
