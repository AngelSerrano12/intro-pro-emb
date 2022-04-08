#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/myfunctions.h"

//prototype functions.

//bool isEvenFunct(int numberToTest);

int main (int argc, char** argv){
    //par o impar

    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);
    int varA = 5;
    int varB = 7;

    printf("before func: varA= %d, varB = %d\n", varA, varB);
   //swap(varA, varB);

    swappAddres(&varA, &varB);
    printf("after func: &varA= %d, &varB = %d\n", varA, varB);


    return 0;
    }