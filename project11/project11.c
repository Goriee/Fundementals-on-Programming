#include <stdio.h>

int main(){


    int num, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("zero\n");
        return 0;
    }

    int reversedNum = 0;
    while (num != 0) {
        reversedNum = (reversedNum * 10) + (num % 10);
        num /= 10;
    }

    while (reversedNum != 0) {
        digit = reversedNum % 10;
        switch (digit) {
            case 0: printf("zero "); 
            break;
            
            case 1: printf("one "); 
            break;

            case 2: printf("two "); 
            break;

            case 3: printf("three "); 
            break;

            case 4: printf("four "); 
            break;

            case 5: printf("five "); 
            break;

            case 6: printf("six "); 
            break;

            case 7: printf("seven "); 
            break;

            case 8: printf("eight "); 
            break;

            case 9: printf("nine "); 
            break;
        }
        reversedNum /= 10;
    }
    printf("\n");

    return 0;
}