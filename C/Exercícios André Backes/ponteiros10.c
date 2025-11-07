#include <stdio.h>

int main() {
    int a, *b, **c, ***d;
    scanf("%d", &a);
    b = &a;
    *b *= 2;
    printf("*b: %d\n", *b);
    *b /= 2;
    c = &b;
    **c *= 3;
    printf("**c: %d\n", **c);
    **c /= 3;
    d = &c;
    ***d *= 4;
    printf("***d: %d\n", ***d);
    return 0;
}