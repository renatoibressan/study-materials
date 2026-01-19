#include <stdio.h>

int main() {
    int n, achouDivisor = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("Nao Primo\n");
        return 0;
    } else if (n < 0) {
        printf("Numero invalido!\n");
        return 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                achouDivisor++;
                break;
            }
        }
        if (achouDivisor) printf("Nao Primo\n");
        else printf("Primo\n");
    }
    return 0;
}

// Primo - 98%