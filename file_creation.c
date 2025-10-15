#include <stdio.h>

int main(void){
    FILE *fptr;

    fptr = fopen("Test.txt","w");
    fclose(fptr);
    return 0;
}
