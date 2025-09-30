#include <stdio.h>

int main(void){
    for(int i=0;i<=10;i++){
        for(int j=3;j<=10;j++){
            int multiple = i*j;
            printf("%s", multiple);
        }
    }
    return 0;
}
