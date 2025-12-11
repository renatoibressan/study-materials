#include <stdio.h>
#include <math.h>

void computeDelta(double a, double b, double c, double *d);

void computeX1(double a, double b, double c, double d, double *x1);

void computeX2(double a, double b, double c, double d, double *x2);

int main() {
    double a, b, c, d, x;
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);
    computeDelta(a, b, c, &d);
    if (d < 0) {
        printf("Esta equacao nao possui raizes reais\n");
        return 0;
    } else if (d == 0) {
        computeX1(a, b, c, d, &x);
        printf("X = %.4lf\n", x);
        return 0;
    } else {
        computeX1(a, b, c, d, &x);
        printf("X1 = %.4lf\n", x);
        computeX2(a, b, c, d, &x);
        printf("X2 = %.4lf\n", x);
    }
    return 0;
}

void computeDelta(double a, double b, double c, double *d) {
    *d = pow(b, 2) - (4 * a * c);
}

void computeX1(double a, double b, double c, double d, double *x1) {
    *x1 = (-b + sqrt(d)) / (2 * a);
}

void computeX2(double a, double b, double c, double d, double *x2) {
    *x2 = (-b - sqrt(d)) / (2 * a);
}