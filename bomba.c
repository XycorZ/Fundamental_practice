#include <stdio.h>

int main(void){
    int bomba = 20;
    while (bomba!=0){
        printf("Time left: %d ...",bomba);
        bomba--; 
    }
    printf("BOOOOOOM");
    return 0;
}
