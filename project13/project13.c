#include <stdio.h>

int main(){


    int test[3][4] = {
        //first
        {1,2,3,4},
        //scond
        {5,6,7,8},
        //third
        {9,10,11,12}
        };

          int test2[3][4] = {
        //first
        {1,2,3,4},
        //scond
        {5,6,7,8},
        //third
        {9,10,11,12}
        };



        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf(" %d ",test[i][j]);
            }
            printf("\n");
           
        };

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %d ",test2[i][j]);
            }
            printf("\n");
           
        };
    
    return 0;
}