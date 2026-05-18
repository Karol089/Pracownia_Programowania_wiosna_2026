struct Car {
    char brand[20];
    int mileage;
};

struct Car initCar(char brand[20], int mileage){
    struct Car myCar = {};
    strCp(myCar.brand, brand);
    myCar.mileage = mileage;
    return myCar;
}

void showCar(struct Car myCar){
    printf("\nMarka: %s\nPrzebieg: %d\n", myCar.brand, myCar.mileage);
}

void mileageService(struct Car* myCar){
    myCar->mileage += 10000;
}

void z7_test(){
    struct Car myCar = initCar("Mercedes", 0);
    showCar(myCar);
    mileageService(&myCar);
    showCar(myCar);
}
