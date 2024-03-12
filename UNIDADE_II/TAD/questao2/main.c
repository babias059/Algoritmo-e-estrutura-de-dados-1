#include "aluno.h"

int main(void) {
    Aluno * estudante = recebe_dados();

    imprimir_dados(estudante);
    liberar_memoria(estudante);
    return 0;
}