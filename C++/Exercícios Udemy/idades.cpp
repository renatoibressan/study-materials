#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome1, nome2;
    int i, idade1, idade2, soma = 0;
    float media;
    cout << "Dados da primeira pessoa:\n";
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;
    soma += idade1;
    cout << "Dados da segunda pessoa:\n";
    cout << "Nome: ";
    cin.ignore(100, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;
    soma += idade2;
    media = (float)soma / 2.0;
    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos\n"; 
    return 0;
}