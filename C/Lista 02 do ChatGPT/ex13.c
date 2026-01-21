#include <stdio.h>

void troca_valores(int *a, int *b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    troca_valores(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void troca_valores(int *a, int *b) {
    int swap = *a;
    *a = *b;
    *b = swap;
}

// Troca - 100%