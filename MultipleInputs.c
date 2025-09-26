#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    int num;

    printf("Whats your name birch and fav num: ");
    
    fgets(name, sizeof(name), stdin);
    name[strcspn(name,"\n")] = 0;
    
    scanf("%d",&num);
    printf("Hi %s, and your fav number is %d\n", name, num);
    return 0;
}
