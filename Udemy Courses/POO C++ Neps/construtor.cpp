#include <cstdio>

struct A {
    int x;
    A() {
        x = 67;
    }
    A(int valor) {
        x = valor;
    }
};

int main() {
    A a(25);
    printf("%d\n", a.x);
    a.x = 46;
    printf("%d\n", a.x);
    a = A();
    printf("%d\n", a.x);
    return 0;
}