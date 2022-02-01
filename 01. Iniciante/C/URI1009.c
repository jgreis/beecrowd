// URI 1009. Salário com Bônus

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[20];
  double salario, vendas, pgt;

  gets(nome);
  scanf("%lf", &salario);
  scanf("%lf", &vendas);

  pgt = vendas * 0.15 + salario;

  printf("TOTAL = R$ %.2lf\n", pgt);

  return 0;
}