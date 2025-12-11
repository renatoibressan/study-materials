#include <stdio.h>

int main() {
    float nota[2], soma = 0;
    char classe[2][10] = {"primeira", "segunda"};
    int i;
    for (i = 0; i < 2; i++) {
        printf("Digite a %s nota: ", classe[i]);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }
    printf("NOTA FINAL = %.1f\n", soma);
    if (soma < 60.00) printf("REPROVADO\n");
    return 0;
}