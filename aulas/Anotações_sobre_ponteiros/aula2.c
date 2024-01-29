/* Primeira aula de Cibely "Ponteiros"
 Declarando ponteiros
 tipo_apontado * nome_da_variavel_ponteiro;
 ex: int * point;
 printf("O ponteiro: %p \n", point):
 Os ponteiros são usados para acessar e manipular dados
 de uma maneira mais eficiente. */ 
#include <stdio.h>
int main() {
 float var = 3.14;
    float *point = &var;
    float pi = *point;
    *point = 1.31456;
    
    printf("var: %f\n", var);
    printf("pi: %f\n", pi);
    printf("*point: %f\n", *point);
    
}