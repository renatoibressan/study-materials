#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 10

void ordenar_vetor(int *p, int n);

int main() {
    int n, m, x, i, k = 0;
    int *p = NULL;
    printf("Insira um tamanho inicial para o vetor: ");
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
    while (1) {
        printf("Insira o elemento de indice %d do vetor (ou 0 para encerrar o preenchimento do vetor): ", k);
        scanf("%d", &x);
        if (x == 0) break;
        if (k == n) {
            printf("Vetor cheio!!!\nPor favor, insira um valor adicional para o tamanho do vetor: ");
            scanf("%d", &m);
            if (m < 1 || m > M) {
                printf("Tamanho adicional invalido!\n");
                free(p);
                return 0;
            }
            n += m;
            int *r = realloc(p, n*sizeof(int));
            if (r == NULL) {
                printf("Nao foi possivel realocar memoria!\n");
                free(p);
                return 0;
            }
            p = r;
        }
        *(p + k) = x;
        k++;
    }
    printf("Vetor original:\n");
    printf("[");
    for (i = 0; i < k; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(p + i));
    }
    printf("]\n");
    ordenar_vetor(p, k);
    printf("Vetor ordenado:\n");
    printf("[");
    for (i = 0; i < k; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(p + i));
    }
    printf("]\n");
    free(p);
    return 0;
}

void ordenar_vetor(int *p, int n) {
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

// Realloc - 98%
// GPT