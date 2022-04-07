#include <stdio.h>


void print_array(float array[], float len_array){       
    printf("f");
    for (int i = 0; i < len_array; i++) printf(" %f ", array[i]);
    printf("}\n");
}

int main(){

    float list_f[] =  {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};
    float list_c[] = {};

    printf("list on °F is\n");
    print_array(list_f,30);

     float value_1;
    for (int i = 0;i < 4;i = i++){
        value_1= list_f[i];
        if(value_1 < 0){
            value_1 = (value_1 + 32)*.555555;
        }else{
            value_1 = (value_1 - 32)*.555555;
        }
        list_c [i] = value_1;
        printf("the list of values in °C is:\n");
        print_array(list_c,30);

        printf("the max value of the array is:%f\n", list_c[29]);

        value_1 = 0;
        for (int i =0; i < 30; i++) value_1 = value_1 + list_c[i];
        value_1 = value_1 / 30;
        printf("the average of the array is: %f\n", value_1);

        return 0;  
    }
   return 0;
}



