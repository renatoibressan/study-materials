#include <iostream>

using namespace std;

class Hello {
    public:
    void hello() {
        cout << "Hello!\n";
    }
    void hello(string name) {
        cout << "Hello, " << name << "!\n";
    }
}; // compile time polymorphism (overloading)

class ByeBye {
    public:
    virtual void byebye() {
        cout << "Bye!\n";
    }
};
class ByeByeAgain: public ByeBye {
    public:
    void byebye() {
        cout << "Bye, bye!\n";
    }
}; // runtime polymorphism (overriding)

int main() {
    Hello h1;
    ByeBye *b1;
    ByeByeAgain b2;
    h1.hello();
    h1.hello("Renato");
    b1 = &b2;
    b1 -> byebye();
    return 0;
}