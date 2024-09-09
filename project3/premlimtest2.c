#include <stdio.h>

int main(){

    int num1,num2;


    scanf("%d", &num1);
    scanf("%d", &num2);
    float sum = num1 + num2;
    float average = sum / 2;
    printf("%f", average);

    return 0;

}