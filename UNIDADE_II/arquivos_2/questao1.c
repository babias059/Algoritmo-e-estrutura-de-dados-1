#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50

typedef struct {
    int id;
    char nome[MAX_NOME];
    float salario;
} Funcionario;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "funcionarios.txt";

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    int qntdFuncionarios;
    printf("------- CADASTRO DE FUNCIONARIOS -------\n");
    printf("Quantidade de funcionarios a serem cadastrados: ");
    scanf("%d", &qntdFuncionarios);
    printf("--- FIM ---\n");

    while (getchar() != '\n');

    Funcionario funcionario;

    for (int i = 0; i < qntdFuncionarios; i++) {
        printf("\nFuncionario %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &funcionario.id);

        printf("Nome: ");
        scanf(" %[^\n]", funcionario.nome); 

        printf("Salario: ");
        scanf("%f", &funcionario.salario);

        while (getchar() != '\n');

        fprintf(arquivo, "%d\t%s\t%.2f\n", funcionario.id, funcionario.nome, funcionario.salario);
    }
    fclose(arquivo);

    printf("\nInformacoes dos funcionarios foram armazenadas em: %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}