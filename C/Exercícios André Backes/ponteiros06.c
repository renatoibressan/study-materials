#include <stdio.h>

int main() {
    int i, arr[5], *ptr;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        ptr = &arr[i];
        if (i % 2 == 0) printf("%p ", *(ptr + i));
    }
    printf("\n");
    return 0;
}