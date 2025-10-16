#include <stdio.h>
#include <string.h>


struct Owner{
    char name[100];
    char surname[100];
    int age;
};

int main(void){
    struct Owner owner = {"John","Cena",47};
    struct Owner *ptr = &owner;

    printf("Forename: %s ", ptr->name);
    printf("Surname: %s ", ptr->surname);
    printf("Age: %i ",ptr->age);    
}
