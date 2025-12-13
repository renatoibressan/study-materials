#include <iostream>
using namespace std;

void menor_de_tres(int a, int b, int c, int *menor);

int main() {
    int valor[3], menor, i;
    string classe[3] = {"Primeiro", "Segundo", "Terceiro"};
    for (i = 0; i < 3; i++) {
        cout << classe[i] << " valor: ";
        cin >> valor[i];
    }
    menor_de_tres(valor[0], valor[1], valor[2], &menor);
    cout << "MENOR = " << menor << endl;
    return 0;
}

void menor_de_tres(int a, int b, int c, int *menor) {
    *menor = a;
    if (b < *menor) *menor = b;
    if (c < *menor) *menor = c;
}