#include <iostream>
#define N 10
using namespace std;

int main() {
    int n, i, j, m[N][N], v[N], negativos = 0;
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "Elemento[" << i << "," << j << "]: ";
            cin >> m[i][j];
            if (i == j) v[j] = m[i][j];
            if (m[i][j] < 0) negativos++;
        }
    }
    cout << "DIAGONAL PRINCIPAL:\n";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;
    return 0;
}