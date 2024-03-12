#include "cbancaria.h"

int main() {
    CBancaria *c1 = criarConta("Joao", 1234, 1000.0);
    CBancaria *c2 = criarConta("Maria", 5678, 500.0);

    depositar(c1, 500.0);
    transferir(c1, c2, 300.0);

    printf("Saldo da conta de Joao: %.2f\n", consultarSaldo(c1));
    printf("Saldo da conta de Maria: %.2f\n", consultarSaldo(c2));

    excluirConta(c1);
    excluirConta(c2);

    return 0;
}