#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
#define NAME 20

typedef struct Aluno {
    char nome[NAME];
    int id;
    float nota;
} aluno;

void ordena_aluno_por_nome(int n, aluno *a);
void ordena_aluno_por_id(int n, aluno *a);
void ordena_aluno_por_nota(int n, aluno *a);

int main() {
    int n, i, opt = 0;
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
        printf("ID do aluno: ");
        scanf("%d", &(a[i].id));
        printf("Nota media do aluno: ");
        scanf("%f", &(a[i].nota));
    }
    while (1) {
        opt = 0;
        printf("1. Ordenar por nome\n");
        printf("2. Ordenar por ID\n");
        printf("3. Ordenar por nota\n");
        printf("Selecione uma das opcoes acima: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                ordena_aluno_por_nome(n, a);
                break;
            case 2:
                ordena_aluno_por_id(n, a);
                break;
            case 3:
                ordena_aluno_por_nota(n, a);
                break;
            default:
                printf("Opcao invalida!\n");
        }
        if (opt >= 1 && opt <= 3) break;
    }
    printf("Dados de todos os alunos:\n");
    for (i = 0; i < n; i++) {
        printf("Dados do aluno %d:\n", i + 1);
        printf("Nome: %s\n", a[i].nome);
        printf("ID: %d\n", a[i].id);
        printf("Nota media: %.2f\n", a[i].nota);
    }
    free(a);
    return 0;
}

void ordena_aluno_por_nome(int n, aluno *a) {
    aluno temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(a[i].nome, a[j].nome) > 0) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void ordena_aluno_por_id(int n, aluno *a) {
    aluno temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].id > a[j].id) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void ordena_aluno_por_nota(int n, aluno *a) {
    aluno temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].nota > a[j].nota) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Ordenacao - 96%