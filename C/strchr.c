#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_chr(const char *str, int ch);

void conta_ocorrencias(const char *str, char ch, int *occurrences);

int main() {
    char str[130], ch;
    int count;
    scanf("%[^\n]%*c %c", str, &ch);
    if (str_chr(str, ch) == NULL) {
        printf("'%c' nao pertence a '%s', portanto, nao foi possivel contar as ocorrencias.\n", ch, str);
    } else {
        conta_ocorrencias(str, ch, &count);
        printf("'%c' aparece %d vez(es) em '%s'.\n", ch, count, str);
    }
    return 0;
}

char *str_chr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch) return (char *)str;
        str++;
    }
    if (ch == '\0') return (char *)str;
    return NULL;
}

void conta_ocorrencias(const char *str, char ch, int *occurrences) {
    int count = 0;
    const char *ptr = str;
    while ((ptr = str_chr(ptr, ch)) != NULL) {
        count++;
        ptr++;
    }
    *occurrences = count;
}