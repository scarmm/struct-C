#include <stdio.h>

struct Pessoa {
    char nome[20];
    char cpf[11];
    int idade;
};

void preencherDados(struct Pessoa *pessoas) {
    for (int i = 0; i < 5; i++) {
        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Informe o CPF da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].cpf);
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("\n");
    }
}

void imprimirDados(struct Pessoa *pessoas) {
    for (int i = 0; i < 5; i++) {
        printf("Dados da pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("CPF: %s\n", pessoas[i].cpf);
        printf("Idade: %d\n\n", pessoas[i].idade);
    }
}

int main() {
    struct Pessoa pessoas[5];
    struct Pessoa *p = pessoas;
    preencherDados(p);
    imprimirDados(p);

    return 0;
}
