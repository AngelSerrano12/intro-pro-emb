#include <stdio.h>

char firstname[255];
char lastname[255];
float age = 0;
char state[255];

int main(){

    printf("enter your dates: \n");
    printf("enter a first name: \n");
    scanf("%s", firstname);
    printf("enter your last name: \n");
    scanf("%s", lastname);
    printf("enter your age: \n");
    scanf("%f", &age);
    printf("enter your state: \n");
    scanf("%s", state);

    return 0;
}