/* Para declarar um ponteiro de função, você deve
especificar o tipo de retorno da função seguido do 
nome do ponteiro e o tipo de parâmetros entre parênteses.
Por exemplo:
int (*ponteiro) (int, int);
Isso declara um ponteiro chamado "ponteiro" que é um ponteiro para
uma função que tem um tipo de retorno inteiro e dois parâmetros inteiros.*/

int soma(int a, int b){
    return a + b;
}
int calcula (int x, int y, int(*operacao)(int, int)) {
    return (*operacao)(x, y);
}
int main() {
    int resultado = calcula(5, 3, soma);
    printf("Resultado: %d", resultado);
    return 0;
}