#include <stdio.h>
#include <string.h>

typedef struct{
    int age;
    char gender;
    char animal[50];
} man;

int main(void){
    man tom = {27,'B',"Cat"};

    printf("Tom you are a %d year old %s and your gender is %c",tom.age,tom.animal,tom.gender);
};
