#include <stdio.h>

int main(void){
    int num = 311;
    int* ptr = &num;
    printf("%d", *ptr);
    return 0;
}
