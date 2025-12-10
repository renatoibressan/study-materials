#include <iostream>

using namespace std;

class heyDestructor {
    public:
    string name;
    heyDestructor(string n) {
        name = n;
        cout << "Hi, " << name << "!\n";
    }
    ~ heyDestructor() {
        cout << "The object was deleted.\n";
    }
};

int main() {
    heyDestructor hi("Renato");
    return 0;
}