#include<stdio.h>

int main(){
    int i, number;

    printf(" range from 0 to:");
    scanf("%d", &number);

    printf(" one number disible by 3 and 5 from 0 to %d are: \n", number);
    for (i = 1; i <= number; i++){
        if(i %3 == 0 && i %5 == 0){
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;    
}