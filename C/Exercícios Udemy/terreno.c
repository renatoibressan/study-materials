#include <stdio.h>

int main() {
    double largura, comprimento, valorM2, area, preco;
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorM2);
    area = largura * comprimento;
    preco = area * valorM2;
    printf("Area do terreno = %.2lf\nPreco do terreno = %.2lf\n", area, preco);
    return 0;
}