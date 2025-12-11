#include <iostream>

using namespace std;

class BaseClass1 {
    public:
    int sum;
    void add(int num1, int num2) {
        sum = num1 + num2;
    }
};
class BaseClass2 {
    public:
    int diff;
    void sub(int num1, int num2) {
        diff = num1 - num2;
    }
};
class DerivedClass1: public BaseClass1 {
    public:
    void showSum() {
        cout << sum << endl;
    }
}; // single inheritance
class DerivedClass2: public BaseClass1, public BaseClass2 {
    public:
    void showSum() {
        cout << sum << endl;
    }
    void showDiff() {
        cout << diff << endl;
    }
}; // multiple inheritance
class DerivedClass3: public DerivedClass1 {}; // multilevel inheritance
class DerivedClass4: public BaseClass1 {
    public:
    void showSum() {
        cout << sum << endl;
    }
}; // hierarchical inheritance

int main() {
    DerivedClass1 d1;
    DerivedClass2 d2;
    DerivedClass3 d3;
    DerivedClass4 d4;
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    d1.add(a, b);
    d1.showSum();
    d2.add(c, d);
    d2.showSum();
    d2.sub(c, d);
    d2.showDiff();
    return 0;
}