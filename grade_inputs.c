#include <stdio.h>

int main(void){
    char grade[100];
    int contin=1;
    int count=0;
    while (contin!=0){
        printf("Enter grade: ");
        scanf(" %c",&grade[count]);
        getchar();
        count++;

        printf("Continue?....:");
        scanf("%d",&contin);

        char sure;
        if (contin==0){
            printf("Do you wish to stop entering grades?....y/n:");
            getchar();
            scanf("%c",&sure);
            if (sure=='y'){
                break;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
    for (int i=0;i<count;i++){
        printf("Grades are as follows: %c\n",grade[i]);
    }
    
    return 0;
}
