#include <stdio.h>
#include <string.h>

typedef union{
    int age;
    char gender;
    char animal[50];
} man;

void updateGender(man *cat){
    strcpy(cat->animal,"Bunny");
};


int main(void){
    man Tom;
    Tom.age = 26;
    Tom.gender = 'M';
    strcpy(Tom.animal,"Cat");
    updateGender(&Tom);

    printf("%d %c %s",Tom.age, Tom.gender, Tom.animal);
    return -1;
};
