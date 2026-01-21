#include <stdio.h>
#define N 10

void maior_do_vetor(int n, int v[], int *maior);

int main() {
    int n, i, v[N], maior;
    scanf("%d", &n);
    if (n < 0 || n > N) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < -99999 || v[i] > 99999) {
            printf("Valor de v[%d] invalido!\n", i);
            return 0;
        }
    }
    maior_do_vetor(n, v, &maior);
    printf("Maior do vetor: %d\n", maior);
    return 0;
}

void maior_do_vetor(int n, int v[], int *maior) {
    *maior = -99999;
    for (int i = 0; i < n; i++) {
        if (v[i] > *maior) *maior = v[i];
    }
}

// Maior - 99%