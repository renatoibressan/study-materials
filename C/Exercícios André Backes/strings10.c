#include <stdio.h>
#include <string.h>
#define N 10000

void toUpper(char * const str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) str[i] -= 32;
        i++;
    }
}

int main() {
    char str[N];
    scanf("%s", str);
    toUpper(str);
    printf("%s\n", str);
    return 0;
}