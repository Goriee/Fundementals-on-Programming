#include <stdio.h>

int findFirstEven(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            return arr[i];
        }
    }
    return -1; 
}

int main() {
    int arr[5];
    printf("\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int firstEven = findFirstEven(arr);
    if (firstEven != -1) {
        printf("%d\n", firstEven);
    } else {
        printf("");
    }

    return 0;
}