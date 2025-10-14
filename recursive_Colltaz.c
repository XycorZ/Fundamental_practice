#include <stdio.h>

int colltaz(int number);
int main(void){
    int number;
    printf("Enter number into the colltaz: ");
    scanf("%d",&number);
    colltaz(number);

    return 0;
}

int colltaz(int number){
    printf("%d\n",number);

    if (number == 1){
        return 0;
    }else{
        if (number % 2 == 0){
            colltaz(number/2);
        }else{
            colltaz(3*number+1);
        }
    }

}
