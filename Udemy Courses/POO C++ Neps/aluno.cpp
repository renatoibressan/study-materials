#include <cstdio>

struct aluno {
    char nome[50];
    int idade;
    void fala() {
        printf("%s\n", nome);
    }
};

int main() {
    aluno x = {"Renato"}, y = {"Aryan"};
    x.fala();
    y.fala();
    return 0;
}