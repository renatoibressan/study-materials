#include <stdio.h>

int main() {
    int i, arr[5];
    int *ptr = arr;
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
        printf("%d ", (*(ptr + i) * 2));    
    }
    printf("\n");
    return 0;
}