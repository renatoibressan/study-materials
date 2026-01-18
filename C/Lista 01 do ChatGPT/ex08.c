#include <stdio.h>
#include <string.h>
#define N 105

int main() {
    char str[N];
    int i, len;
    fgets(str, N, stdin);
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

// 100%