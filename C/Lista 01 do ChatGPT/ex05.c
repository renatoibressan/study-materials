#include <stdio.h>
#define N 10

int main() {
    int n, i;
    double v[N], soma = 0, media;
    scanf("%d", &n);
    if (n <= 0 || n > N) return 0;
    for (i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
        soma += v[i];
    }
    media = soma / (double)n;
    printf("%.1lf\n", media);
    return 0;
}

// 97%