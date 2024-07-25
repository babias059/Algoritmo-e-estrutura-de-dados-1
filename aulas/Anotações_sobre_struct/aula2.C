/*
Ponteiro para estruturas:

struct ponto *pp;
(*pp).x =12.0;
pp->x = 12.0;

Passagem de estruturas para funções:

void imprime(struct ponto p){
    printf("O ponto fornecido foi: (%.2f,%.2f)\n", p.x, p.y);
}
void captura (struct ponto *pp){
    printf("Digite as coordenadas do ponto (x y): \n");
    scanf("%f %f", &pp->x, &pp->y);
}
int main(void){
    struct ponto p;
    captura(&p);
    imprime(&p);
    return 0;
}

** Pode ter alguns problemas com essa abordagem:
-> não há como alterar os valores dos elementos da estrutura original;
-> copiar uma estrutura inteira para a pilha pode ser uma operação custosa.

Alocação dinâmica de estruturas:

struct ponto* p; 
p= (struct ponto *) malloc(sizeof(struct ponto));
...
p->x = 12.0;
...

Em geral, definimos nomes de tipos para estruturas:

typedef struct ponto{
    float x;
    float y;
} Ponto;

*/
