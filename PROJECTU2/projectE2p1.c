#include <stdio.h>

int main ()
{
    char name [100];
    int age;

    printf("introduce your name \n");
    scanf("%s", name);
    printf("introduce you age \n");
    scanf("%d", &age);
    if (age<18) {
        printf( "youre  to young for stay here \n");
    }
else {
    printf("enjoy it %s\n", name);
}
 return 0;
}