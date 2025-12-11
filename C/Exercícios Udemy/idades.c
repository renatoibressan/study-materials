#include <stdio.h>
#define N 100

int main() {
    char nomes[2][N], pessoa[2][10] = {"primeira", "segunda"};
    int i, idades[2], soma = 0;
    float media;
    for (i = 0; i < 2; i++) {
        printf("Dados da %s pessoa:\n", pessoa[i]);
        printf("Nome: ");
        scanf("%[^\n]%*c", nomes[i]);
        printf("Idade: ");
        scanf("%d%*c", &idades[i]);
        soma += idades[i];
    }
    media = soma / 2.0;
    printf("A idade media de %s e %s eh de %.1f anos\n", nomes[0], nomes[1], media);
}