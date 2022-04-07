#include <stdio.h>

int main() 
{
int i,j,k,h;
    for(i=1; i<=12; i++)
    {
        printf("Month %d:\n", i);
        if (i == 2){
        for (j=1; j<=28; j++)
        {
            printf("%d\n", j);
        }    
        }
        else {
            if (i==4 || i==6 || i==9 || i==11){
            for (k=1;k<=30; k++)
            {
            printf("%d\n", k);
        }      
            }
            else{
            for (h=1; h<=31; h++)
            {
            printf("%d\n", h);
        }          
            }
        }
    }
    return 0;
}