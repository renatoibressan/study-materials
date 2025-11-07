#include <stdio.h>
#define N 10

void preencheVetor(int *arr, int n);

int main() {
    int arr[N], n;
    scanf("%d", &n);
    preencheVetor(arr, n);
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void preencheVetor(int *arr, int n) {
    for (int i = 0; i < N; i++) {
        *(arr + i) = n;
    }
}