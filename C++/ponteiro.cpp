#include <iostream>

using namespace std;

int main() {
    int a = 5;
    cout << a << endl; // 5
    cout << &a << endl; // Endereço de 5
    int *b = &a;
    cout << b << endl; // Endereço de 5
    cout << *b << endl; // 5
    return 0;
}