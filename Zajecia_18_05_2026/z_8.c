struct Book{
    char title[50];
    int pagecount;
};

struct Book initBook(char title[50], int pagecount){
    struct Book myBook = {};
    strCp(myBook.title, title);
    myBook.pagecount = pagecount;
    return myBook;
}

void showBook(struct Book myBook){
    printf("\nTytul: %s\nLiczba stron: %d\n", myBook.title, myBook.pagecount);
}

void addPages(struct Book* myBook){
    myBook->pagecount += 10;
}

void z8_test(){
    struct Book myBook = initBook("Lord of the Rings", 1500);
    showBook(myBook);
    addPages(&myBook);
    showBook(myBook);
}
