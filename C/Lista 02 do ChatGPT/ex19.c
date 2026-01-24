#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[4], i;
    int n1, n2, n3, n4, soma;
    float media;
    FILE *arq = NULL;
    arq = fopen("file.txt", "w");
    if (arq == NULL) {
        printf("Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    for (i = 0; i < 4; i++) {
        scanf("%d", &v[i]);
    }
    fprintf(arq, "%d %d %d %d", v[0], v[1], v[2], v[3]);
    fclose(arq);
    arq = fopen("file.txt", "r");
    if (arq == NULL) {
        printf("Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    fscanf(arq, "%d %d %d %d", &n1, &n2, &n3, &n4);
    soma = n1 + n2 + n3 + n4;
    media = (float)soma / 4.0;
    printf("Numeros lidos do arquivo:\n%d %d %d %d\n", n1, n2, n3, n4);
    printf("Soma total: %d\nMedia total: %.2f\n", soma, media);
    fclose(arq);
    return 0;
}

// Leitura - 94%