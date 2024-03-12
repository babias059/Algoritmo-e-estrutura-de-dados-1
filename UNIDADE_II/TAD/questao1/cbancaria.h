#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura CBancaria
typedef struct {
    char nomeTitular[50];
    int numeroConta;
    float saldoConta;
} CBancaria;

// Protótipos das funções
CBancaria *criarConta(char nomeTitular[], int numeroConta, float saldoInicial);
void depositar(CBancaria *conta, float valor);
void sacar(CBancaria *conta, float valor);
void transferir(CBancaria *contaOrigem, CBancaria *contaDestino, float valor);
float consultarSaldo(CBancaria *conta);
void excluirConta(CBancaria *conta);

#endif
