/* Outro exemplo: */

int *criar_variavel(){
    int variavel = 5;
    return &variavel;
}
int main() {
    int *ponteiro = criar_variavel();
    printf("Valor da variavel: %d", *ponteiro);
    return 0;
}