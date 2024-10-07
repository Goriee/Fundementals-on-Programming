#include <stdio.h>

int main() {



    
int pin;
int attempts = 0;
const int correctPin = 1234;

while (attempts < 3) {
    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin == correctPin) {
        printf("Access granted.\n");
        break;
    } else {
        printf("Incorrect PIN. Try again.\n");
        attempts++;
    }
}

if (attempts == 3) {
    printf("Too many incorrect attempts. Access denied.\n");
}



    return 0;
}