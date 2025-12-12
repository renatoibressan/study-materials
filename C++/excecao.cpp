#include <iostream>

using namespace std;

double division(int n, int d) {
    if (d == 0) throw "Division by zero!";
    return (double)n / (double)d;
}

int main() {
    int a, b;
    double c;
    cin >> a >> b;
    try {
        c = division(a, b);
        cout << c << endl;
    } catch (const char *txt) {
        cerr << txt << endl;
    }
    return 0;
}