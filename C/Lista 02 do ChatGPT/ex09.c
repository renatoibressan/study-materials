#include <stdio.h>
#define N 10

int main() {
    int n, m[N][N], i, j;
    int somaDiagPrin = 0;
    int somaDiagSec = 0;
    int somaDiagonais;
    scanf("%d", &n);
    if (n < 2 || n > N) {
        printf("Ordem de matriz invalida!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            if (i == j) somaDiagPrin += m[i][j];
            if (i + j == n - 1) somaDiagSec += m[i][j];
        }
    }
    somaDiagonais = somaDiagPrin + somaDiagSec;
    printf("Soma na diagonal principal: %d\n", somaDiagPrin);
    printf("Soma na diagonal secundaria: %d\n", somaDiagSec);
    printf("Soma nas duas diagonais: %d\n", somaDiagonais);
    return 0;
}

// Diagonais - 100%