#include <stdio.h>
#define nMAX 100

int main() {
    int n, i;
    double v[nMAX], soma = 0.0, media;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &v[i]);
        soma += v[i];
    }
    media = soma / n;
    printf("VALORES = ");
    for (i = 0; i < n; i++) printf("%.1lf ", v[i]);
    printf("\n");
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);   
    return 0;
}