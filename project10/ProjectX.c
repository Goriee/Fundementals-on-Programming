#include <stdio.h>

int main()
{


int var = 1;


    while(var != 0){

    printf("Enter a number: ");
    scanf("%d", &var);
        if (var == 5){
            printf("success\n");
            
            return 0;

        }
        else(printf("failure\n"));
        
        if (var == 0)
        {
            printf("Exiting program\n");
        }
        

    }


    return 0;
}