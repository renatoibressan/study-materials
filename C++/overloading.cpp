#include <iostream>

using namespace std;

void Hello() {
    cout << "Hello!\n"; 
} void Hello (string txt) {
    cout << "Hello, " << txt << "!\n";
}

int main() {
    Hello();
    Hello("World");
    return 0;
}