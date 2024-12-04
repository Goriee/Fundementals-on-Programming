#include <stdio.h>

int main() {
    int scores[4];
    int total = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &scores[i]);
        total += scores[i];  
    }

    

    printf("%d",total);

    return 0;
}
