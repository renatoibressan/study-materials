#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, count = 0, soma = 0;
    int maior = -99999, menor = 99999;
    double media;
    FILE *arq = NULL;
    arq = fopen("file.txt", "r");
    if (arq == NULL) {
        printf("Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    while (fscanf(arq, "%d", &x) == 1) {
        printf("Foi lido do arquivo o numero %d\n", x);
        soma += x;
        if (x > maior) maior = x;
        if (x < menor) menor = x;
        count++;
    }
    if (count == 0) {
        printf("O arquivo esta vazio!\n");
        fclose(arq);
        return 0;
    }
    media = (double)soma / (double)count;
    printf("Soma total : %d\nMedia total: %.2lf\n", soma, media);
    printf("Maior numero: %d\nMenor numero: %d\n", maior, menor);
    fclose(arq);
    return 0;
}

// Estatisticas - 100%