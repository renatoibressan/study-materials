#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Lado(s) invalido(s)!\n");
        return 0;
    }
    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("Invalido\n");
        return 0;
    } else {
        if (a == b && a == c && b == c) printf("Equilatero\n");
        else if (a == b || a == c || b == c) printf("Isosceles\n");
        else if (a != b && a != c && b != c) printf("Escaleno\n");
    }
    return 0;
}

// Triangulo - 95%