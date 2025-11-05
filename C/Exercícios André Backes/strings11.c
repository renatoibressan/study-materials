#include <stdio.h>
#include <string.h>
#define N 10000

void toLower(char * const str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) str[i] += 32;
        i++;
    }
}

int main() {
    char str[N];
    scanf("%s", str);
    toLower(str);
    printf("%s\n", str);
    return 0;
}