#include <stdio.h>
#include <string.h>


struct Car {
    int year;
    char model[100];
};

int main(void){
    struct Car car;
    car.year = 2007;
    strcpy(car.model,"Chervy Chervorolt");
    printf("%s",car.model);
    return 0;
    
}
