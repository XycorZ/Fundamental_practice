#include <stdio.h>

int main(void){
    int a,b,tmp;
    printf("Enter two numbers:   ");
    scanf("%d %d",&a,&b);
    tmp=a;
    a=b;
    b=tmp;
    printf("We have switched %d with %d",a,b);


    return 0;
}
