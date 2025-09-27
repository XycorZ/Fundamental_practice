#include <stdio.h>

void funky(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(num;num>=0;num--){
        printf("%d...",num);
    }
}

int main(void){
    funky();
}
