#include <stdio.h>
#define N 8

void imprimeVetor(int *v);

int main() {
    int v[N] = {12, 23, 34, 45, 56, 67, 78, 89};
    imprimeVetor(v);
    return 0;
}

void imprimeVetor(int *v) {
    for (int i = 0; i < N; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}