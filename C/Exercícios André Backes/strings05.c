#include <stdio.h>
#include <string.h>
#define N 10000

void inverteString(char *str) {
    int begin = 0, end = strlen(str) - 1;
    char temp;
    while (begin < end) {
        temp = str[begin];
        str[begin] = str[end];
        str[end] = temp;
        begin++;
        end--;
    }
}

int main() {
    char str[N];
    scanf("%s", str);
    inverteString(str);
    printf("%s\n", str);
    return 0;
}