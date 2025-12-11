#include <stdio.h>
#define N 10

int main() {
    int n, i, j, m[N][N], v[N], negativos = 0;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if (i == j) v[j] = m[i][j];
            if (m[i][j] < 0) negativos++; 
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d\n", negativos);
    return 0;
}