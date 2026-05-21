struct Airplane{
    char* model;
    unsigned int number_of_engines;
};

unsigned int leastEngines(struct Airplane airplanes[], unsigned int size){
    unsigned int min = airplanes[0].number_of_engines;
    for(int i = 1; i < size; i++){
        if(airplanes[i].number_of_engines < min){
            min = airplanes[i].number_of_engines;
        }
    }
    return min;
}

void z10_test(){
    struct Airplane airplanes[] = {
        {"Model 1", 8},
        {"Model 2", 4},
        {"Model 3", 1}
    };
    unsigned int size = sizeof(airplanes)/sizeof(struct Airplane);


    printf("%d\n", leastEngines(airplanes, size));
}
