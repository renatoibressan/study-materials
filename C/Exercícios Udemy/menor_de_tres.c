#include <stdio.h>

void menor_de_tres(int a, int b, int c, int *menor);

int main() {
    int valor[3], menor, i;
    char classe[3][10] = {"Primeiro", "Segundo", "Terceiro"};
    for (i = 0; i < 3; i++) {
        printf("%s valor: ", classe[i]);
        scanf("%d", &valor[i]);
    }
    menor_de_tres(valor[0], valor[1], valor[2], &menor);
    printf("MENOR = %d\n", menor);
    return 0;
}

void menor_de_tres(int a, int b, int c, int *menor) {
    *menor = a;
    if (b < *menor) *menor = b;
    if (c < *menor) *menor = c;
}