#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME_FRUTA 50

typedef struct {
    char nome[MAX_NOME_FRUTA];
    float preco;
} Fruta;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "frutas.txt";


    arquivo = fopen(nomeArquivo, "a"); 
    if (arquivo == NULL) {
        perror("ERRO AO ABRIR O ARQUIVO PARA ESCRITA.");
        return EXIT_FAILURE;
    }

    Fruta fruta;

    char opcao;

    do {
   
        printf("\nCadastro de Fruta:\n");

        printf("Nome da Fruta: ");
        scanf(" %[^\n]", fruta.nome);

        printf("Preço da Fruta: ");
        scanf("%f", &fruta.preco);

        while (getchar() != '\n');

        fprintf(arquivo, "%s,%.2f\n", fruta.nome, fruta.preco);

        printf("\nDeseja cadastrar outra fruta? (S para Sim, qualquer tecla para encerrar): ");
        scanf(" %c", &opcao);

    } while (toupper(opcao) == 'S');

    fclose(arquivo);

    printf("\nCadastro de frutas concluído. Informações salvas em: %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}