#include <iostream>

using namespace std;

class Hello {
    public:
    void hello() {
        cout << "Hello from the base.\n";
    }
};

class HelloAgain: public Hello {
    public:
    void hello() {
        cout << "Hello from the sub.\n";
    }
};

int main() {
    Hello h1;
    HelloAgain h2;
    h1.hello();
    h2.hello();
    return 0;
}