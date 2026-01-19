#include <stdio.h>
#define LIN 10
#define COL 10

int main() {
    int a[LIN][COL], b[LIN][COL], c[LIN][COL];
    int l1, c1, l2, c2;
    int i, j, k;
    printf("Dimensoes da matriz A:\n");
    scanf("%d %d", &l1, &c1);
    if (l1 < 1 || l1 > LIN) {
        printf("Dimensao de linha da matriz A invalida!\n");
        return 0;
    }
    if (c1 < 1 || c1 > COL) {
        printf("Dimensao de coluna da matriz A invalida!\n");
        return 0;
    }
    if (l1 == 1 && c1 == 1) {
        printf("Ordem da matriz A invalida!\n");
        return 0;
    }
    printf("Dimensoes da matriz B:\n");
    scanf("%d %d", &l2, &c2);
    if (l2 < 1 || l2 > LIN) {
        printf("Dimensao de linha da matriz B invalida!\n");
        return 0;
    }
    if (c2 < 1 || c2 > COL) {
        printf("Dimensao de coluna da matriz B invalida!\n");
        return 0;
    }
    if (l2 == 1 && c2 == 1) {
        printf("Ordem da matriz B invalida!\n");
        return 0;
    }
    if (c1 != l2) {
        printf("As medidas de coluna da matriz A e de linha da matriz B nao podem ser distintas!\n");
        return 0;
    }
    printf("Elementos de A:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elementos de B:\n");
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matriz produto:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < l2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Multiplicacao - 98%