#include <stdio.h>

int multiply(int a,int b){
    int multiple = a * b;
    printf("When u multiply %d with %d,you get: %d", a, b, multiple);
}

int main(void){
    int a,b;
    printf("Enter two numbers you wish to multiply: \n");
    scanf("%d %d",&a,&b);
    multiply(a,b);

}
