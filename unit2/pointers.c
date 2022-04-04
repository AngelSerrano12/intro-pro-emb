#include <stdio.h>
#include <stdlib.h>

int edad = 25;

int main ( int argc, char** argv){

    printf (" la variable esdad = %d\n", edad);
    printf (" la direccion de la variable edad = %d\n", &edad );
    ///creacopm de pointer//

    int* myPtr = NULL;
    myPtr = &edad; 

    printf ("la variable pointer 'myPtr' es igual a: %p\n", myPtr);
    printf ("la variable de la variable 'myPtr' = %p\n", myPtr);

    return 0;
}