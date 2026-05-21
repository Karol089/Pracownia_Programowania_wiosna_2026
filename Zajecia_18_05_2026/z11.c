struct Computer{
    char* brand;
    unsigned int number_of_cores;
};

unsigned int maxCores(struct Computer pcs[], unsigned int size){
    unsigned int max = pcs[0].number_of_cores;
    for(int i = 1; i < size; i++){
        if(pcs[i].number_of_cores > max){
            max = pcs[i].number_of_cores;
        }
    }
    return max;
}

void z11_test(){
    struct Computer pcs[] = {
        {"Brand 1", 8},
        {"Brand 2", 16},
        {"Brand 3", 12}
    };
    unsigned int size = sizeof(pcs)/sizeof(struct Computer);


    printf("%d\n", maxCores(pcs, size));
}
