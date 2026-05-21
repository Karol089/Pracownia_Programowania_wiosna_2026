struct Bike {
    char model[40];
    int distance_traveled;
};

struct Bike* initBike(char model[40], int distance){
    if(strLen(model) < 4 || distance < 1){
        struct Bike* myBike = 0;
        return myBike;
    }

    struct Bike* myBike = (struct Bike*)malloc(sizeof(struct Bike));
    strCp(myBike->model, model);
    myBike->distance_traveled = distance;
    return myBike;
}

void increaceDistance(struct Bike* myBike){
    myBike->distance_traveled += 500;
}

void dispBike(struct Bike* myBike){
    printf("Model: %s\n", myBike->model);
    printf("Distance traveled: %d\n", myBike->distance_traveled);
}

void z14_test(){
    struct Bike* myBike = initBike("Some nice bike", 100);
    if(!myBike){
        printf("Inicjalizacja roweru nieudana");
    } else {
        dispBike(myBike);
        increaceDistance(myBike);
        dispBike(myBike);
    }
    free(myBike);
}
