#include <iostream>

using namespace std;

class heyConstructor {
    public:
    heyConstructor() {
        cout << "Hi! I am a constructor\n";
    }
};

int main() {
    heyConstructor hi;
    return 0;
}