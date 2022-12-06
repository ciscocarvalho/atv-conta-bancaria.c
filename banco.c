#include "./banco.h"
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct banco {
  unsigned int numero_conta;
  float saldo;
};

Banco *criar_conta() {
  Banco *conta = (Banco *)malloc(sizeof(Banco));

  // caller pode fazer if(valor == NULL) pra saber se a conta nao foi criada
  if (conta != NULL) {
    static unsigned int numero_conta = 0;
    conta->saldo = 0;
    conta->numero_conta = numero_conta++;
  }

  return conta;
}

bool sacar(Banco *conta, float valor) {
  bool status = false;

  if (conta->saldo > valor) {
    conta->saldo -= valor;
    status = true;
  }

  return status;
}

float get_saldo(Banco *conta) { return conta->saldo; }

void depositar(Banco *conta, float valor) { conta->saldo += valor; }
