#include <stdio.h>
#include <stdlib.h>
#define N 105

typedef struct Pessoa {
    char nome[N];
    int idade;
} pessoa;

int main() {
    int n, i;
    pessoa *p = NULL;
    scanf("%d%*c", &n);
    if (n <= 0) return 0;
    p = malloc(n*sizeof(pessoa));
    if (p == NULL) return 0;
    for (i = 0; i < n; i++) {
        fgets(p[i].nome, N, stdin);
        scanf("%d%*c", &(p[i].idade));
    }
    for (i = 0; i < n; i++) {
        if (p[i].idade >= 18) printf("%s", p[i].nome);
    }
    free(p);
    return 0;
}

// 100%