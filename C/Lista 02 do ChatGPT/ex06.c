#include <stdio.h>

int main() {
    int n, a = 0, b = 1, aux;
    scanf("%d", &n);
    if (n < 1) {
        printf("Valor invalido!\n");
        return 0;
    } else if (n == 1) printf("%d ", a);
    else if (n == 2) printf("%d %d ", a, b);
    else if (n > 2) {
        printf("%d %d ", a, b);
        for (int i = 3; i <= n; i++) {
            aux = a + b;
            a = b;
            b = aux;
            printf ("%d ", b);
        }
    }
    printf("\n");
    return 0;
}

// Fibonacci - 97%