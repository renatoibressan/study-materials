#include <stdio.h>

int main() {
    int arr[] = {1, 12, 23, 34, 45, 56, 67, 78, 89, 100}; // Declara o array arr e seu conteúdo
    int *ptr = arr; // O ponteiro ptr, de tipo inteiro, aponta para o conteúdo do primeiro endereço de arr[]
    for (int i = 0; i < 10; i++) {
        printf("%d ", *ptr); // Imprime o conteúdo do endereço que o ptr contém
        ptr++; // Percorre arr[] incrementando o valor de ptr em uma unidade, avançando para o próximo endereço de arr[]
    }
    printf("\n"); // Quebra de linha
    return 0; // Finaliza a main
}