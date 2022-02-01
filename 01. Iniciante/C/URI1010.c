// URI 1010. Cálculo Simples

#include <stdio.h>

int main()
{
  int cod_peca1, cod_peca2, qtd_peca1, qtd_peca2;
  float valor_peca1, valor_peca2, valor_pago;

  scanf("%d %d %f", &cod_peca1, &qtd_peca1, &valor_peca1);
  scanf("%d %d %f", &cod_peca2, &qtd_peca2, &valor_peca2);

  valor_pago = qtd_peca1 * valor_peca1 + qtd_peca2 * valor_peca2;

  printf("VALOR A PAGAR: R$ %.2f\n", valor_pago);

  return 0;
}