void findMaxValue(int* numbers, unsigned int size){
    int max = 0;
    size = size / sizeof(int);
    for(int i = 0; i < size; i++){
        if (max < numbers[i]){
            max = numbers[i];
        }
    }
    printf("%d\n", max);
}
