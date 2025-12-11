#include <stdio.h>
#define N 10

int main() {
    int nl, nc, i, j;
    double m[N][N], soma[N];
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &nl);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &nc);
    for (i = 0; i < nl; i++) {
        soma[i] = 0;
        printf("Digite os elementos da %da. linha:\n", i + 1);
        for (j = 0; j < nc; j++) {
            scanf("%lf", &m[i][j]);
            soma[i] += m[i][j];
        }
    }
    printf("VETOR GERADO:\n");
    for (i = 0; i < nl; i++) {
        printf("%.1lf\n", soma[i]);
    }
    return 0;
}