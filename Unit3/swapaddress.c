#include <stdio.h>
#include <stdlib.h>

int main( int argc, char** argv){
       void swap(int *a, int *z){
        int temp = *a;
        *a = *z;
        *z = temp;       
    }
     
   void seleccion( int arreglo[], int longitud){
       for(int i = 0; i < SIZE - 1; 1++){
           for(int j = i +1; j < SIZE; j++){

               if (arreglo[i] > arreglo[j]){
                   swap (&arreglo[i], &arrglo[j]);
               }                           
        
           }
       }
   }
    
int main(void) {

    int array[3] = {3,1,2};
    longitud = sizeof array/ sizeof array [0];








}









    return 0;
}








