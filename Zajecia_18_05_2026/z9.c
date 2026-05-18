struct Laptop{
    char model[30];
    float price;
};

struct Laptop initLaptop(char model[30], float price){
    struct Laptop myLaptop = {};
    strCp(myLaptop.model, model);
    myLaptop.price = price;
    return myLaptop;
}

void showLaptop(struct Laptop myLaptop){
    printf("\nModel: %s\nCena: %.2f\n", myLaptop.model, myLaptop.price);
}

void reducePrice(struct Laptop* myLaptop){
    myLaptop->price -= 0.05f * (myLaptop->price);
}

void z9_test(){
    struct Laptop myLaptop = initLaptop("Lenowo", 2000.20f);
    showLaptop(myLaptop);
    reducePrice(&myLaptop);
    showLaptop(myLaptop);
}
