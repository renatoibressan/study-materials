#include <stdio.h>

int main() {
    int a, b, *maior;
    scanf("%d%d", &a, &b);
    if (&a >= &b) maior = &a;
    else maior = &b;
    printf("%p\n", maior);
    return 0;
}