#include <stdio.h>
#define N 105

int main() {
    char str[N];
    int i, j, k, l = 0;
    scanf("%s", &str);
    while (str[l] != '\0') l++;
    k = l - 1;
    j = l / 2;
    for (i = 0; i < j; i++) {
        if (str[i] != str[k]) {
            printf("Nao\n");
            break;
        }
        k--;
    }
    if (i == j) printf("Sim\n");
    return 0;
}

// Palindromo - 100%