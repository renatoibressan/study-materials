#include <stdio.h>
#include <stdlib.h>
#define N 100

void bubble_sort(int *p, int n);

int main() {
    int n, i;
    int *p = NULL;
    scanf("%d", &n);
    if (n < 1 || n > N) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    p = (int *)malloc(n*sizeof(int));
    if (p == NULL) {
        printf("Nao foi possivel alocar memoria!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    printf("Vetor original:\n");
    printf("[");
    for (i = 0; i < n; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(p + i));
    }
    printf("]\n");
    bubble_sort(p, n);
    printf("Vetor ordenado:\n");
    printf("[");
    for (i = 0; i < n; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(p + i));
    }
    printf("]\n");
    free(p);
    return 0;
}

void bubble_sort(int *p, int n) {
    int swap;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                swap = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = swap;    
            }
        }
    }
}

// Vetor - 98%