#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    float n1, n2, n3;
    float media;
    int aprovado;
} Aluno;

void calcularMediaEStatus(Aluno *aluno) {
    aluno->media = (aluno->n1 + aluno->n2 + aluno->n3) / 3.0;
    aluno->aprovado = aluno->media >= 7.0 ? 1 : 0;
}

int main() {
    FILE *entrada;
    char nomeArquivoEntrada[] = "entrada_q3.txt";

    // Criar o arquivo de entrada e adicionar dados
    entrada = fopen(nomeArquivoEntrada, "w");
    if (entrada == NULL) {
        perror("Erro ao criar o arquivo de entrada");
        return EXIT_FAILURE;
    }

    fprintf(entrada, "Ana\t9.5\t7.0\t8.2\n");
    fprintf(entrada, "Bernado\t5.2\t6.5\t6.8\n");
    fprintf(entrada, "Carlos\t7.0\t6.5\t9.8\n");
    fprintf(entrada, "David\t6.5\t5.0\t4.4\n");
    fprintf(entrada, "Vera\t7.4\t5.0\t8.3\n");

    fclose(entrada);

    // Ler dados do arquivo tanto de entrada como vai criar o arquivo de saída
    FILE *saida;
    char nomeArquivoSaida[] = "saida_q3.txt";

    entrada = fopen(nomeArquivoEntrada, "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    saida = fopen(nomeArquivoSaida, "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(entrada);
        return EXIT_FAILURE;
    }

    Aluno aluno;

    while (fscanf(entrada, "%49s%f%f%f", aluno.nome, &aluno.n1, &aluno.n2, &aluno.n3) == 4) {
        calcularMediaEStatus(&aluno);
        fprintf(saida, "Nome: %s\tMédia: %.2f\tSituação: %s\n", aluno.nome, aluno.media, aluno.aprovado ? "Esta aprovado" : "Esta reprovado");
    }

    fclose(entrada);
    fclose(saida);

    printf("Processo concluído. Resultados salvos em %s\n", nomeArquivoSaida);

    return EXIT_SUCCESS;
}