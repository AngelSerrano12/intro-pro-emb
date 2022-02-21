#include  <stdio.h>
#include <string.h>

char str[] = "";

int main(int argc, char** argv){
    strcpy(str,argv[1]);
    printf("%s\n",str);
    return 0;  
}