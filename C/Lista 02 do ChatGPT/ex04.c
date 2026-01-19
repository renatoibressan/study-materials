#include <stdio.h>

long long int fatorial(int n);

int main() {
    int n;
    long long int f;
    scanf("%d", &n);
    if (n < 0) {
        printf("Valor invalido!\n");
        return 0;
    }
    f = fatorial(n);
    printf("%d! = %lld\n", n, f);
    return 0;
}

long long int fatorial(int n) {
    if (n == 0) return 1;
    long long int x = 1;
    for (int i = 1; i <= n; i++) {
        x *= i;
    }
    return x;
}

// Fatorial - 97%