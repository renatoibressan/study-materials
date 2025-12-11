#include <stdio.h>

int main() {
    int idades;
    double media = 0.0, d = 0.0;
    printf("Digite as idades:\n");
    scanf("%d", &idades);
    if (idades < 0) {
        printf("IMPOSSIVEL CALCULAR\n");
        return 0;
    } else {
        while (idades >= 0) {
            media += idades;
            d++;
            scanf("%d", &idades);
            if (idades < 0) break;
        }
    }
    media /= d;
    printf("MEDIA = %.2lf\n", media);
    return 0;
}