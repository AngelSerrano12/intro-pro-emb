#include<stdio.h>
#include<stdlib.h>

int main (int argc, char ** argv){
    float num1 = atoi(argv[1]);
    float num2 = atoi(argv[2]);
    float num3 = atoi(argv[3]);
    float num4 = atoi(argv[4]);
    float num5 = atoi(argv[5]);
    float sum = num1 + num2 + num3 + num4 + num5;
    float mean = sum/5;
    printf("the mean for your numbers is %f\n", mean);

    return 0;

}