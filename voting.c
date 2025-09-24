#include <stdio.h>

int main(void){
    const int voting_age = 18;
    int voter_age ;
    printf("What is your age: \n");
    scanf("%d", &voter_age);
    (voter_age < voting_age) ? printf("Your too young") : printf("Welcome to vote");
    return 0;
}
