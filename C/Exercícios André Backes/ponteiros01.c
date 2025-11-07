#include <stdio.h>

void maior_de_dois(int *x, int *y, int *maior);

int main() {
    int a, b, maior;
    int *c = &a, *d = &b;
    maior_de_dois(c, d, &maior);
    printf("%p\n", maior);
    return 0;
}

void maior_de_dois(int *x, int *y, int *maior) {
    if (*x >= *y) *maior = *x;
    else *maior = *y;
}