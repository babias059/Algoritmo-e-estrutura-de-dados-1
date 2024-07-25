/*
Uma estrutura em C pode ser usada para armazenar dados de diferentes tipos, como 
números, strings, pontos etc, dentro de um único contexto.
Exemplo:
struct ponto {
    float x;
    float y;
};
*/
#include <stdio.h>

struct ponto {
    float x;
    float y;
};
 
int main(void) {
    struct ponto p;
    printf("Digite as coordenadas do ponto (x y): \n");
    scanf("%f %f", &p.x, &p.y);
    printf("Coordenadas do ponto: (%.2f, %.2f)\n", p.x, p.y);
    return 0;
}
