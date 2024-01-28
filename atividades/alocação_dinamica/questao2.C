#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 10

void resultado(char *gab, char **alunos, int num_alunos, int t_questoes){
    float aprov = 0;
    printf("Nota dos alunos: \n");

    for(int i = 0; i < num_alunos; i++){
        float nota = 0;
        float acertos = 0;

        for(int j = 0; j < t_questoes; j++){
            if(alunos[i][j] == gab[j]){
                acertos++;
            }
        }

        nota = (acertos / t_questoes) * 10;
        printf("Aluno %d: %.2f\n", i + 1, nota);

        if(nota >= 6.0){
            aprov++;
        }
    }

    float porcentagem = (aprov / num_alunos) * 100;
    printf("Porcentagem de aprovados: %.2f%%\n", porcentagem);
}

int main(void){
    int t_questoes;
    printf("Quantidade de questoes:\n");
    scanf("%d", &t_questoes);

    char *gab = (char *)malloc(t_questoes * sizeof(char));
    
    char **alunos = (char **)malloc(MAX_ALUNOS * sizeof(char *));
    for(int i = 0; i < MAX_ALUNOS; i++){
        alunos[i] = (char *)malloc(t_questoes * sizeof(char));
        if (alunos[i] == NULL){
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
    }

    if(gab == NULL){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Gabarito:\n");

    for(int i = 0; i < t_questoes; i++){
        printf("Insira o gabarito da questao %d:\n ", i + 1);
        scanf(" %c", &gab[i]);
    }

    for(int i = 0; i < MAX_ALUNOS; i++){
        printf("Aluno %d:\n", i + 1);
        for(int j = 0; j < t_questoes; j++){
            printf("Insira a resposta do aluno para a questao %d:\n", j + 1);
            scanf(" %c", &alunos[i][j]);
        }
    }

    resultado(gab, alunos, MAX_ALUNOS, t_questoes);

    free(gab);

    for(int i = 0; i < MAX_ALUNOS; i++){
        free(alunos[i]);
    }

    free(alunos);

    return 0;
}
