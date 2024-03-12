#include "cbancaria.h"



CBancaria *criarConta(char nomeTitular[], int numeroConta, float saldoInicial) {
    CBancaria *conta = (CBancaria *)malloc(sizeof(CBancaria));
    if (conta == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    strcpy(conta->nomeTitular, nomeTitular);
    conta->saldoConta = saldoInicial;
    conta->numeroConta = numeroConta;
    return conta;
}

void depositar(CBancaria *conta, float valor) {
    if (conta != NULL) {
        conta->saldoConta += valor;
        printf("Deposito de %.2f realizado com sucesso na conta de %s. Novo saldo: %.2f\n", valor, conta->nomeTitular, conta->saldoConta);
    } else {
        printf("Conta inexistente!\n");
    }
}

void sacar(CBancaria *conta, float valor) {
    if (conta != NULL) {
        if (conta->saldoConta >= valor) {
            conta->saldoConta -= valor;
            printf("Saque de %.2f realizado com sucesso na conta de %s. Novo saldo: %.2f\n", valor, conta->nomeTitular, conta->saldoConta);
        } else {
            printf("Saldo insuficiente na conta de %s para realizar o saque.\n", conta->nomeTitular);
        }
    } else {
        printf("Conta inexistente!\n");
    }
}

void transferir(CBancaria *contaOrigem, CBancaria *contaDestino, float valor) {
    if (contaOrigem != NULL && contaDestino != NULL) {
        if (contaOrigem->saldoConta >= valor) {
            contaOrigem->saldoConta -= valor;
            contaDestino->saldoConta += valor;
            printf("Transferencia de %.2f realizada com sucesso da conta de %s para a conta de %s.\n", valor, contaOrigem->nomeTitular, contaDestino->nomeTitular);
        } else {
            printf("Saldo insuficiente na conta de %s para realizar a transferencia.\n", contaOrigem->nomeTitular);
        }
    } else {
        printf("Conta(s) inexistente(s)!\n");
    }
}

float consultarSaldo(CBancaria *conta) {
    if (conta != NULL) {
        return conta->saldoConta;
    } else {
        printf("Conta inexistente!\n");
        return -1; // Poderia retornar NAN ou outro valor inválido
    }
}

void excluirConta(CBancaria *conta) {
    if (conta != NULL) {
        free(conta);
        printf("Conta excluida com sucesso!\n");
    } else {
        printf("Conta inexistente!\n");
    }
}
