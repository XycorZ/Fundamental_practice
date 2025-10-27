#include <stdio.h>
#include <stdlib.h>

int main(void){
   int number;
   printf("Enter amount of grades: ");
   scanf("%d", &number);

   char *grades = malloc(number * sizeof(char));
   if (grades != NULL){
        for(int i=0; i<number; i++){
            printf("Enter grade #%d: ",i+1);
            scanf(" %c",&grades[i]);
        };
        for (int i=0;i<number;i++){
            printf("%c\n", grades[i]);
        };
   }else{
        printf("Memeory allocation failed");
   }

   free(grades);
   grades=NULL;
};
