#include <stdio.h>

int main() {
    float peso, altura, imc;
    scanf("%f %f", &peso, &altura);
    if (peso <= 0 || altura <= 0) {
        printf("Medida(s) invalida(s)!\n");
        return 0;
    }
    imc = peso / (altura * altura);
    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc >= 18.5 && imc < 25) printf("Normal\n");
    else if (imc >= 25 && imc < 30) printf("Sobrepeso\n");
    else if (imc >= 30) printf("Obesidade\n");
    return 0;
}

// IMC - 97%