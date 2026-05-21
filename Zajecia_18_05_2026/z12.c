struct Book{
    char* title;
    int pagecount;
};

struct Book maxPages(struct Book books[], unsigned int size){
    struct Book max = books[0];
    for(int i = 1; i < size; i++){
        if(books[i].pagecount >= max.pagecount){
            max = books[i];
        }
    }
    return max;
}

void dispBook(struct Book myBook){
    printf("\nTytul: %s\nLiczba stron: %d\n", myBook.title, myBook.pagecount);
}

void z12_test(){
    struct Book books[] = {
        {"Hobbit", 1234},
        {"Opowiesci z narni", 1500},
        {"Czarna gora", 1234}
    };
    unsigned int size = sizeof(books)/sizeof(struct Book);


    dispBook(maxPages(books, size));
}
