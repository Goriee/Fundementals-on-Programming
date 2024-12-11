#include <stdio.h>
#include <limits.h>

int findSmallestEven(int arr[3][3]) {
    int smallest_even = INT_MAX;
    

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] % 2 == 0 && arr[i][j] < smallest_even) {
                smallest_even = arr[i][j];
            }
        }
    }
    
    if(smallest_even == INT_MAX) {
        return -1;
    }
    
    return smallest_even;
}

int main() {
    int array[3][3];
    
    printf("\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    
    int result = findSmallestEven(array);
    if(result == -1) {
        printf("\n");
    } else {
        printf("%d\n", result);
    }
    
    return 0;
}