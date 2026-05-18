struct Airplane{
    char* model;
    unsigned int number_of_engines;
};

unsigned int leastEngines(struct Airplane airplanes[], unsigned int size){
    //for(int i = 0; i < )
}

void z10_test(){
    struct Airplane airplanes[] = {
        {"Model 1", 2},
        {"Model 2", 4},
        {"Model 3", 6},
    };


    printf("%d\n", leastEngines(airplanes));
}
