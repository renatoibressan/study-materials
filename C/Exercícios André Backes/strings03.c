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
    printf("%d\n", tamanho);
    return 0;
}