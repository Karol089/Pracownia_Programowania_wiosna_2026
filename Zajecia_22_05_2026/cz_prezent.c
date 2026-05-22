#define NULL 0

struct element{
    int x;
    struct element* next;
};

void tutorial(){
    // Listy bez glowy
    // deklaracja listy i pierwszy element
    /*
    struct element* lista = NULL;
    struct element* wsk = malloc(sizeof(struct element));
    wsk->x = 13;
    wsk->next = NULL;
    lista = wsk;
    // dodanie elementu po wsk
    struct element* wsk2 = malloc(sizeof(struct element));
    wsk2->x = 15;
    wsk2->next = NULL;
    wsk->next = wsk2;
    struct element* wsk3 = malloc(sizeof(struct element));
    wsk3->x = 29;
    wsk3->next = lista;
    lista = wsk3;
    struct element* temp = lista;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    */

    // Listy z glowa
    struct element* lista2 = malloc(sizeof(struct element));
    lista2->next = NULL;
    // dodawanie na poczatek listy z glowa
    struct element* wsk4 = malloc(sizeof(struct element));
    wsk4->x = 129;
    wsk4->next = lista2->next;
    lista2->next = wsk4;
}

