#include <stdio.h>

int main(void){
    int num1;
    int num2;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("So the result of your numbers is: %d", sum);
    return 0;
}
