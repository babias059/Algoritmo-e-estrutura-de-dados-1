#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno {
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno *) malloc(sizeof(Aluno));
    if (estudante == NULL) {
        printf("Não há espaço suficiente.");
        exit(1);
    }
    printf("Informe o nome do aluno: "); 
    scanf(" %[^\n]", estudante->nome);

    printf("Informe a matrícula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Informe o IRA do aluno: ");;
    scanf("%f", &estudante->IRA);

    return estudante;
};

void imprimir_dados(Aluno * estudante){ 
    printf("Nome do aluno: %s \n", estudante->nome);
    printf("Matricula do aluno: %d \n", estudante->matricula);
    printf("IRA do aluno: %f \n", estudante->IRA);
};


void liberar_memoria(Aluno * estudante) {
    free(estudante);
};