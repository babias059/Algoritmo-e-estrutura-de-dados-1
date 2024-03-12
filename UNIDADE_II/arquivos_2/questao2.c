#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50 

typedef struct {
    char nome[MAX_NOME];
    float n1, n2, n3;
} Aluno;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "alunos.txt";


    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita.");
        return EXIT_FAILURE;
    }

    int qntdAlunos;

    printf("Quantidade de alunos a serem cadastrados: ");
    scanf("%d", &qntdAlunos);

 
    while (getchar() != '\n');

    Aluno aluno;

    for (int i = 0; i < qntdAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", aluno.nome);

        printf("Nota 1: ");
        scanf("%f", &aluno.n1);

        printf("Nota 2: ");
        scanf("%f", &aluno.n2);

        printf("Nota 3: ");
        scanf("%f", &aluno.n3);

        while (getchar() != '\n');

        fprintf(arquivo, "%s\t%.2f\t%.2f\t%.2f\n", aluno.nome, aluno.n1, aluno.n2, aluno.n3);
    }

    fclose(arquivo);

    printf("\nInformacoes dos alunos foram armazenadas em: %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}