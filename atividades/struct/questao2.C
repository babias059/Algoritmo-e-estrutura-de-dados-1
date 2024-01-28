#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    int doc;
} Pessoa;

void preencher(Pessoa *pessoa) {
    printf("Digite o nome: \n");
    scanf("%s", pessoa->nome);
    printf("Digite a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("Digite o documento: \n");
    scanf("%d", &pessoa->doc);
}

void imprimir(const Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
    printf("Documento: %d\n", pessoa->doc);
}

void atualizar(Pessoa *pessoa, int nv_idade) {
    pessoa->idade = nv_idade;
}

void velhaxnova(const Pessoa pessoa[], int tamanho) {
    int maisvelha = 0, maisnova = 0;
    for (int i = 1; i < tamanho; i++) {
        if (pessoa[i].idade > pessoa[maisvelha].idade) {
            maisvelha = i;
        }
        if (pessoa[i].idade < pessoa[maisnova].idade) {
            maisnova = i;
        }
    }
    printf("A pessoa mais velha é: \n");
    imprimir(&pessoa[maisvelha]);
    printf("A pessoa mais nova é: \n");
    imprimir(&pessoa[maisnova]);
}

int main() {
    Pessoa pessoa1;
    preencher(&pessoa1);
    printf("\n Informacao da pessoa: \n");
    imprimir(&pessoa1);

    atualizar(&pessoa1, 30);
    printf("\n Informacao da pessoa atualizada: \n");
    imprimir(&pessoa1);

    Pessoa pessoas[3];
    for (int i = 0; i < 3; i++) {
        printf("Informe a nova informacao sobre a pessoa %d: \n", i + 1);
        preencher(&pessoas[i]);
    }
    printf("\n A mais velha e mais nova entre as pessoas: \n");
    velhaxnova(pessoas, 3);

    return 0;
}
