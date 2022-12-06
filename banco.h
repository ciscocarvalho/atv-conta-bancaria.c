#include <stdbool.h>
typedef struct banco Banco;

Banco *criar_conta();
bool sacar(Banco *b, float valor);
float get_saldo(Banco *b);
void depositar(Banco *b, float valor);
