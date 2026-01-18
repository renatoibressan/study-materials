#include <stdio.h>
#define N 105

int conta_vogais(char txt[]);

int main() {
    char str[N];
    int count;
    fgets(str, N, stdin);
    count = conta_vogais(str);
    printf("%d\n", count);
    return 0;
}

int conta_vogais(char txt[]) {
    int i, count = 0;
    for (i = 0; txt[i] != '\0'; i++) {
        switch (txt[i]) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
        }
    }
    return count;
}

// 100%