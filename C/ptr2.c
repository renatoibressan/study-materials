#include <stdio.h>

int main() {
    int arr[] = {1, 12, 23, 34, 45, 56, 67, 78, 89, 100}; // Declara o array arr e seu conteúdo
    int *ptr = arr; // O ponteiro ptr, de tipo inteiro, aponta para o conteúdo do primeiro endereço de arr[]
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i)); // Imprime cada elemento de arr[] no índice i, via ponteiro e sua notação
    }
    printf("\n"); // Quebra de linha
    return 0;
}