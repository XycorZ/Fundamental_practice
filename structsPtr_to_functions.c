#include <stdio.h>

struct Pinfo{
    char name[15];
    int age;
    char has_car;
};


void changeName(struct Pinfo *c){
    c -> name == "JOJO";
};

int main(void){
    struct Pinfo charli = {"Charli",19,'N'};
    changeName(&charli);

    printf("Name: %s. Age: %d. Has a car? %c", charli.name,charli.age,charli.has_car);
    return 0;
};
