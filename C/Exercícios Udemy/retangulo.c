#include <stdio.h>
#include <math.h>

void diagonal(double x, double y, double *D);

int main() {
    double b, h, A, P, D;
    printf("Base do retangulo: ");
    scanf("%lf", &b);
    printf("Altura do retangulo: ");
    scanf("%lf", &h);
    A = b * h;
    P = (2 * b) + (2 * h);
    diagonal(b, h, &D);
    printf("AREA = %.4lf\n", A);
    printf("PERIMETRO = %.4lf\n", P);
    printf("DIAGONAL = %.4lf\n", D);
    return 0;
}

void diagonal(double x, double y, double *D) {
    double i = pow(x, 2);
    double j = pow(y, 2);
    double k = i + j;
    *D = sqrt(k);
}