#include <iostream>
#include <iomanip>
#define MAXCT 10
using namespace std;

int main() {
    int n, i, idade[MAXCT], under16 = 0;
    float altura[MAXCT], altura_media, soma_altura = 0.0;
    double percent;
    string nome[MAXCT];
    cout << "Quantas pesssoas serao digitadas? ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Dados da " << (i + 1) << "a pessoa:\n";
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        if (idade[i] < 16) under16++;
        cout << "Altura: ";
        cin >> altura[i];
        soma_altura += altura[i];
    }
    altura_media = soma_altura / (double)n;
    percent = (100 * under16) / (double)n;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << altura_media << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percent << "%\n";
    for (i = 0; i < n; i++) {
        if (idade[i] < 16) cout << nome[i] << endl;
    }
    return 0;
}