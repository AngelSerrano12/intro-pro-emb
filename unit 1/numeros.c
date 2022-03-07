#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int args, char** argv){


    printf("enter a number: %s %s \n", argv[0], argv[1]);
    int number = atoi(argv[1]);
    bool isDivided = number%2 == 0;

    if (isDivided){
        printf(" the number is pair \n");
    } 
    else{
        printf(" the number is odd \n");
    }

    return 0;
}
    
    
