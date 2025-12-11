#include <stdio.h>

int main() {
    int n, i;
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);
    if (n < 1 || n > 10) return 0;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}