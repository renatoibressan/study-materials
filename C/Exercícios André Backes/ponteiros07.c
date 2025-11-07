#include <stdio.h>
#define N 205

char *str_str(const char *str, const char *obj);

int main() {
    char str[N], obj[N];
    scanf("%[^\n]%*c %[^\n]%*c", str, obj);
    if (str_str(str, obj) != NULL) printf("'%s' pertence a '%s'\n", obj, str);
    else printf("'%s' nao pertence a '%s'\n", obj, str);
    return 0;
}

char *str_str(const char *str, const char *obj) {
    if (*obj == '\0') return (char *)str;
    for (; *str != '\0'; str++) {
        const char *origem = str;
        const char *chave = obj;
        while (*origem == *chave) {
            origem++;
            chave++;
            if (*chave == '\0') return (char *)str;
        }
    }
    return NULL;
}