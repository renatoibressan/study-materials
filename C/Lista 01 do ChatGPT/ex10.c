#include <stdio.h>
#include <stdlib.h>
#define N 105

typedef struct Produto {
    char nome[N];
    float preco;
} produto;

int main() {
    int n, i, k;
    float maior = 0;
    produto *p = NULL;
    scanf("%d%*c", &n);
    if (n <= 0) return 0;
    p = malloc(n*sizeof(produto));
    if (p == NULL) return 0;
    for (i = 0; i < n; i++) {
        fgets(p[i].nome, N, stdin);
        scanf("%f%*c", &(p[i].preco));
        if (p[i].preco > maior) {
            maior = p[i].preco;
            k = i;
        }
    }
    printf("%s", p[k].nome);
    free(p);
    return 0;
}

// 86%