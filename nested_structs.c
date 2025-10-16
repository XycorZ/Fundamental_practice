#include <stdio.h>
#include <string.h>


struct Owner{
    char name[100];
    char surname[100];
};

struct Car {
    int year;
    char model[100];
    struct Owner owner;
};

int main(void){
    struct Car car;
    struct Owner owner;
    car.year = 2007;
    strcpy(car.model,"Chervy Chervorolt");
    strcpy(car.owner.name,"Alfred");
    strcpy(car.owner.surname,"Wayne");
    printf("%s\n%s %s",car.model,car.owner.name,car.owner.surname);
    return 0;
    
}
