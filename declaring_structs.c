#include <stdio.h>

struct Car {
    int year;
    char model[100];
};


int main(void){
    struct Car car = {2007,"Camaro"};
    printf("Year: %d\nModel: %s",car.year,car.model);
    return 0;
    
}
