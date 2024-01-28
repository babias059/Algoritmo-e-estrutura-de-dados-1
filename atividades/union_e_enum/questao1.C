#include <stdio.h>

typedef enum {
    MASCULINO,
    FEMININO
} Genero;
typedef struct {
    char nome[50];
    int idade;
    Genero genero;
} Pessoa;
void lerdados(Pessoa *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Digite a idade: ");
    scanf("%d", &(p->idade));
    printf("Digite o gênero (0 para masculino, 1 para feminino): ");
    scanf("%d", (int*)&(p->genero));
}
void imprimirdados(Pessoa *p) {
    printf("Nome: %s \n", p->nome);
    printf("Idade: %d \n", p->idade);
    printf("Gênero: %s \n", p->genero == MASCULINO ? "Masculino" : "Feminino");
}

int main() {
    Pessoa pessoa;
    lerdados(&pessoa);
    imprimirdados(&pessoa);

    return 0;
}