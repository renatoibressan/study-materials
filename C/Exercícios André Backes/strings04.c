#include <stdio.h>
#include <string.h>
#define N 10000

int strLength(char const *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char str[N];
    int tamanho;
    scanf("%s", str);
    tamanho = strLength(str);
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}