#include <stdio.h>
#define N 10

int main() {
    int n, i, j, v[N], count = 0;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    if (n < 1 || n > N) return 0;
    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        if (v[i] >= 0) count++;
    }
    if (count == n) return 0;
    printf("NUMEROS NEGATIVOS:\n");
    for (i = 0; i < n; i++) {
        if (v[i] < 0) printf("%d\n", v[i]);
    }
    return 0;
}