#include <stdio.h>
#include <stdlib.h>

// Zlozone typy danych cz.1
// Struktury


/* cz. prezentacyjna
struct Punkt2D {
    float x;
    float y;
};
*/

void strCp(char* tab1, char* tab2){
    int i = 0;
    while(tab2[i] != 0){
        tab1[i] = tab2[i];
        i++;
    }
    tab1[i] = 0;
}

int strLen(char* tab){
    int i = 0;
    while(tab[i] != 0){
        i++;
    }
    return i;
}

// Zadanie 1
struct Car {
    char* brand;
    char model[20];
    int year;
    unsigned int isAvailable;
};

// Zadanie 2
struct Student {
    char* firstName;
    char* lastName;
    int id;
    double gpa;
};

// Zadnaie 3
struct Rectangle{
    double width;
    double height;
    char* color;
};

// Zadanie 4
struct WeatherInfo {
    double temperature;
    double humidity;
    double windSpeed;
};

// Zadnaie 5
struct Book {
    char* title;
    char* author;
    int publishedYear;
    int pages;
};

// Zadanie 6
struct Person {
    char name[20];
    int age;
};

struct Person* initPerson(char name[20], int age){
    struct Person* person = (struct Person*) malloc(sizeof(struct Person));
    strCp(person->name, name);
    person->age = age;
    return person;
}

void showPerson(struct Person* person){
    printf("%s Aged %d\n", person->name, person->age);
}

void birthday(struct Person* person){
    person->age++;
}

// Zadanie 7


int main()
{
    /* cz. prezentacyjna
    struct Punkt2D* punkt = (struct Punkt2D*) malloc(sizeof(struct Punkt2D));
    punkt->x = 3.0f;
    punkt->y = 4.0f;
    printf("%f %f", punkt->x, punkt->y);
    */

    // Zadanie 1
    /*
    struct Car* Auto1 = (struct Car*) malloc(sizeof(struct Car));
    Auto1->brand = (char*) malloc(sizeof(char) * 10);
    strCp(Auto1->brand, "Volzwagen");
    strCp(Auto1->model, "Bora");
    Auto1->year = 2000;
    Auto1->isAvailable = 1;
    printf("%s\n%s\n%d\n%d", Auto1->brand, Auto1->model, Auto1->year, Auto1->isAvailable);
    */

    // Zadanie 2
    /*
    struct Student student1 = {"Jan", "Kowalski", 1, 3.53};
    struct Student student2 = {"Piotr", "Nowak", 2, 4.53};
    struct Student student3 = {"Anna", "Kowalewska", 3, 3.73};
    struct Student* students = (struct Student*) malloc(sizeof (struct Student) * 3);
    *(students) = student1;
    *(students + 1) = student2;
    *(students + 2) = student3;
    */

    // Zadanie 3
    /*
    struct Rectangle rects[4] = {
        {10.2, 5.5, "white"},
        {10.5, 2.4, "red"},
        {9.9, 12.2, "green"},
        {11.2, 5.8, "blue"},
    };
    */

    // Zadanie 4
    /*
    struct WeatherInfo data1 = {1.1, 2.2, 3.3};
    struct WeatherInfo data2 = {4.4, 5.5, 6.6};
    struct WeatherInfo data3 = {7.7, 8.8, 9.9};
    */

    // Zadanie 5
    /*
    struct Book books[5] = {
        {"Title 1", "Jan Kowalski", 2000, 453},
        {"Title 2", "Piotr Nowak", 2002, 500},
        {"Title 3", "Aleksandra Kowalewska", 2004, 300},
        {"Title 4", "George Martin", 2000, 1000},
        {"Title 5", "Henryk Sienkiewicz", 2000, 453},
    };
    */

    // Zadanie 6
    /*
    struct Person* person1 = initPerson("Jan", 30);
    showPerson(person1);
    birthday(person1);
    showPerson(person1);
    */


    return 0;
}
