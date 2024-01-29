/* Usando funções com ponteiros */

 void incrementa(int *ponteiro){
    (*ponteiro)++;
 }
 int main(){
    int variavel = 5;
    incrementa(&variavel);
    printf("Valor da variavel: %d", variavel);
    return 0;
 }
 