#include <stdio.h>
#include <string.h>

union jack{
    int num;
    char name[50];
};

int main(void){
    union jack j1;
    strcpy(j1.name,"Jotaro");
    j1.name == "Koko";
    j1.num = 1738;
    printf("Name:%s\nNum:%d Size of union? :%zu ",j1.name,j1.num, sizeof(j1));
    return 0; 
};
