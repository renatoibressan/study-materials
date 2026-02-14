#include <cstdio>
#include <cstdlib>

struct A {
    int *p;
    ~ A() {
        free(p);
        printf("Morreu\n");
    }
};

int main() {
    A a;
    a.p = (int *)malloc(10*sizeof(int));
    return 0;
}