#include <stdio.h>
#define N 10

int main() {
    int n, i, v[N], soma = 0;
    int maior = -99999, menor = 99999;
    double media;
    scanf("%d", &n);
    if (n < 1 || n > N) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < -99999 || v[i] > 99999) {
            printf("Valor invalido!\n");
            return 0;
        }
        soma += v[i];
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    media = (double)soma / (double)n;
    printf("Media: %.2lf\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}

// Estatisticas - 100%