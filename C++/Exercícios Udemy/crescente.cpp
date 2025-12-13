#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Digite dois numeros:\n";
    cin >> x >> y;
    if (x == y) return 0;
    else {
        while (1) {
            if (x < y) cout << "CRESCENTE!\n";
            else if (x > y) cout << "DECRESCENTE!\n";
            cout << "Digite outros dois numeros:\n";
            cin >> x >> y;
            if (x == y) break;
        }
    }
    return 0;
}