#include <iostream>
using namespace std;

int main() {
    int x, y, i, troca, soma = 0;
    cout << "Digite dois numeros:\n";
    cin >> x >> y;
    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }
    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) soma += i;
    }
    cout << "SOMA DOS IMPARES = " << soma << endl;
    return 0;
}