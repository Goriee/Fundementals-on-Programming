#include <stdio.h>

int sumOfOddNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[5];
    printf("");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumOfOddNumbers(arr, 5);
    printf("%d\n", sum);

    return 0;
}