/* Primeira aula de Cibely "Ponteiros"
 Declarando ponteiros
 tipo_apontado * nome_da_variavel_ponteiro;
 ex: int * point;
 printf("O ponteiro: %p \n", point):
 Os ponteiros são usados para acessar e manipular dados
 de uma maneira mais eficiente. */ 

#include <stdio.h>
int main() {
    int numero = 2;
    int * ponteiro;

    ponteiro = &numero;

    printf("Valor da variável 'numero': %d\n", numero);
    printf("Endereço armazenado em 'ponteiro': %p\n", (void *)ponteiro);
    printf("Valor apontado por 'ponteiro': %d\n", *ponteiro);
    
    return 0;
}