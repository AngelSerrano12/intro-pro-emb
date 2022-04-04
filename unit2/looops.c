#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main (int argc, char** argv){


    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");

    int numero = 1;
    
     for (  numero <=5 ){
        printf("my numero es : %d\n", numero);
    };

    int sensorPin = 0;
    bool isTempturelow = true;

    while (true){
        sensorPin = rand()%200;
        printf("Sensor read:: %d \n", sensorPin);
        sleep(2000);
        bool isTempMax = (sensorPin >= 149);

        if (isTempMax) {
            break;
        };

        system("clear");

    }

    printf("Program done...\n");

    return 0 ;
}