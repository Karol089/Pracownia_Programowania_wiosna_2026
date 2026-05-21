enum Month{
    JANUARY = 31,
    FEBRUARY = 28,
    MARCH = 31,
    APRIL = 30,
    MAY = 31,
    JUNE = 30,
    JULY = 31,
    AUGUST = 31,
    SEPTEMBER = 30,
    OCTOBER = 31,
    NOVEMBER = 30,
    DECEMBER = 31
};

unsigned int daysInMonth(enum Month month){
    unsigned int days = month;
    return days;
};

void z17_test(){
    printf("%d", daysInMonth(JULY));
};
