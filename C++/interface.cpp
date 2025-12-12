#include <iostream>

using namespace std;

class Student {
    public:
    virtual void name() = 0;
};

class Renato: public Student {
    public:
    void name() {
        cout << "Renato\n";
    }
};

int main() {
    Renato r1;
    r1.name();
    return 0;
}