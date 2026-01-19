#include <stdio.h>

int main() {
    int consumo;
    float tarifa, valor_final = 0;
    scanf("%d", &consumo);
    if (consumo < 0) {
        printf("Dado invalido!\n");
        return 0;
    } else if (consumo <= 100) {
        tarifa = 0.5;
        valor_final += consumo * tarifa;
    } else if (consumo > 100 && consumo <= 200) {
        valor_final += 100 * 0.5;
        consumo -= 100;
        tarifa = 0.6;
        valor_final += consumo * tarifa;
    } else if (consumo > 200) {
        valor_final += 100 * 0.5;
        valor_final += 100 * 0.6;
        consumo -= 200;
        tarifa = 0.7;
        valor_final += consumo * tarifa;
    }
    printf("%.2f\n", valor_final);
    return 0;
}

// Tarifa - 98%