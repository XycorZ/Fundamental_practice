#include <stdio.h>
#include <math.h>

int main(void){
    typedef struct{
        int c;
        int z;
    } wsp;
    

    wsp Hi = {4,4};
    Hi.z = pow(Hi.c, Hi.c-1);
    printf("%d", Hi.z);
    return 0;
};
