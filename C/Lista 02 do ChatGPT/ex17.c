#include <stdio.h>
#include <stdlib.h>
#define N 100
#define NAME 20

typedef struct Aluno {
    char nome[NAME];
    int matricula;
    float nota;
} aluno;

void ordena_alunos(int n, aluno *a);

int main() {
    int n, i;
    aluno *a = NULL;
    printf("Quantos alunos serao cadastrados? ");
    scanf("%d", &n);
    if (n < 1 || n > N) {
        printf("Quantidade de alunos invalida!\n");
        return 0;
    }
    a = malloc(n*sizeof(aluno));
    if (a == NULL) {
        printf("Nao foi possivel alocar memoria!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("Insira os dados solicitados para o aluno %d:\n", i + 1);
        printf("Nome inicial do aluno: ");
        scanf("%*c%[^\n]", (a[i].nome));
        printf("Matricula do aluno: ");
        scanf("%d", &(a[i].matricula));
        printf("Nota media do aluno: ");
        scanf("%f", &(a[i].nota));
    }
    ordena_alunos(n, a);
    printf("Dados de todos os alunos:\n");
    for (i = 0; i < n; i++) {
        printf("Dados do aluno %d:\n", i + 1);
        printf("Nome: %s\n", a[i].nome);
        printf("Matricula: %d\n", a[i].matricula);
        printf("Nota media: %.2f\n", a[i].nota);
    }
    free(a);
    return 0;
}

void ordena_alunos(int n, aluno *a) {
    aluno temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].matricula > a[j].matricula) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Alunos - 95%