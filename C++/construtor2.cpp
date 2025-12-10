#include <iostream>

using namespace std;

class heyConstructor {
    public:
    int num;
    heyConstructor(int n) {
        num = n;
        cout << "Hi! For the " << num << " time.\n";
    }
};

int main() {
    heyConstructor hi(100);
    return 0;
}