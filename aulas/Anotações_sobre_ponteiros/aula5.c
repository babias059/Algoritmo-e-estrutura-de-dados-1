/*Aritmética de ponteiros:
 permite que os programadores manipulem memória
  e dados usando operações matemáticas simples.
 exemplos:
 p+2 <- soma de um inteiro a um ponteiro
 p-3 <- subtração de um inteiro a um ponteiro
 ++p ou p++ <- incremento de ponteiro
 --p ou p-- <- decremento de ponteiro
 p - p2 <- subtração entre dois ponteiros do mesmo tipo

 exemplo:

 int * pointer;
 pointer+3

 representa o endereço da posiçãode memória
 que está três objetos do tipo int adiante do
 endereço do objeto para o qual poiter aponta. */ 

/*Exercicio: Determine se as expressoes a seguir 
representam expressoes aritmética legais ou ilegais: */ 

int main(){
    long *p1, *p2;
    int j;
    char *p3;

    p2 = p1 + 4; /* legal. */ 
    j = p2 - p1; /* legal, j recebe 4 */ 
    j = p1 - p2; /* legal, j recbe -4 */
    p1 = p2 - 2; /* legal. */
    p3 = p1 - 1; /* legal mas os ponteiros não são compatíveis. */
    j = p1 - p3; /* ilegal */
}