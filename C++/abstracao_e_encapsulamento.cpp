#include <iostream>

using namespace std;

class Abstratction {
    private:
    string name;
    public:
    void getName(string newName) {
        name = newName;
    }
    void showName() {
        cout << name << endl;
    }
}; // this abstraction is a case of encapsulation
/*
Encapsulation focuses on hiding data
Abstraction focuses on hiding the implementation
*/
int main() {
    Abstratction oh;
    oh.getName("Renato");
    oh.showName();
    // oh.name = "Renato" => ERROR!
    return 0;
}