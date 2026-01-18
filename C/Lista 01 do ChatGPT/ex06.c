#include <stdio.h>

int main() {
    int m[2][2], i, j, soma = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }
    printf("%d\n", soma);
    return 0;
}

// 99%