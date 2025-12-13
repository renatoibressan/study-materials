#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double diagonal(double x, double y);

int main() {
    double b, h, A, P, D;
    cout << "Base do retangulo: ";
    cin >> b;
    cout << "Altura do retangulo: ";
    cin >> h;
    A = b * h;
    P = (2 * b) + (2 * h);
    D = diagonal(b, h);
    cout << fixed << setprecision(4);
    cout << "AREA = " << A << endl;
    cout << "PERIMETRO = " << P << endl;
    cout << "DIAGONAL = " << D << endl;
    return 0;
}

double diagonal(double x, double y) {
    double d = (x * x) + (y * y);
    return sqrt(d);
}