#include <stdio.h>

int main(void){
    FILE *fptr;

    fptr = fopen("Test.txt","w");
    fprintf(fptr,"Hello");
    fclose(fptr);
    fptr = fopen("Test.txt","a");
    fprintf(fptr,"\nLIKE WASSAP DANGERR");
    fclose(fptr);
    return 0;
}
