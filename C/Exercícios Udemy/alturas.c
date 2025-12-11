#include <stdio.h>
#define N 100
#define MAXCT 10

int main() {
    int n, i, idade[MAXCT], under16 = 0;
    double percent;
    float altura[MAXCT], altura_media, soma_altura = 0.0;
    char nome[MAXCT][N];
    printf("Quantas pesssoas serao digitadas? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        if (idade[i] < 16) under16++;
        printf("Altura: ");
        scanf("%f", &altura[i]);
        soma_altura += altura[i];
    }
    altura_media = soma_altura / n;
    percent = (under16 * 100.0) / n;
    printf("Altura media: %.2f\n", altura_media);
    printf("Pessoas com menos de 16 anos: %.1lf%c\n", percent, '%');
    for (i = 0; i < n; i++) {
        if (idade[i] < 16) printf("%s\n", nome[i]);
    }
    return 0;
}