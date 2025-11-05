#include <stdio.h>
#include <string.h>
#define N 10000

int contaVogais(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') count++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count++;
    }
    return count;
}

void trocaCaracteres(char *str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') str[i] = c;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') str[i] = c;
    }
}

int main() {
    char str[N], c;
    int old, new;
    scanf("%s %c", str, &c);
    old = contaVogais(str);
    printf("%d\n", old);
    trocaCaracteres(str, c);
    new = contaVogais(str);
    printf("%s\n%d\n", str, new);
    return 0;
}