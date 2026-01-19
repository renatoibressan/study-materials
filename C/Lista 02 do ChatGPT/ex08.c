#include <stdio.h>
#define N 15

int main() {
    int n, i, j, v[N];
    int contaRepetido, jaContado;
    scanf("%d", &n);
    if (n < 1 || n > N) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        jaContado = 0;
        for (j = 0; j < i; j++) {
            if (v[j] == v[i]) {
                jaContado = 1;
                break;
            }
        }
        if (jaContado) continue;
        contaRepetido = 0;
        for (j = 0; j < n; j++) {
            if (v[j] == v[i]) contaRepetido++;
        }
        if (contaRepetido > 1) printf("%d aparece %d vezes\n", v[i], contaRepetido);
    }
    return 0;
}

// Repeticoes - 100%
// GPT