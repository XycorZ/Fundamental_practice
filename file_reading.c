#include <stdio.h>

int main(void){
    FILE *fptr;
    fptr = fopen("Tes.txt","r");
    char stringy[100];
    if (fptr !=NULL){
        while(fgets(stringy,100,fptr)){
            printf("%s",stringy);
        }
    }else{
        printf("Mker, the file dont exist");
    }
    fclose(fptr);
    return 0;
}
