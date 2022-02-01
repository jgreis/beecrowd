// URI 1048. Aumento de Salário

#include <stdio.h>

int main()
{
    float salario = 0;
    float reajuste = 0;
    int perc_reajuste = 0;
    float valor_reajuste = 0;

    scanf("%f", &salario);

    if (salario <= 400)
    {
        perc_reajuste = 15;
        reajuste = 0.15;
        valor_reajuste = salario * reajuste;
        salario += valor_reajuste;
    }
    else if (salario <= 800)
    {
        perc_reajuste = 12;
        reajuste = 0.12;
        valor_reajuste = salario * reajuste;
        salario += valor_reajuste;
    }
    else if (salario <= 1200)
    {
        perc_reajuste = 10;
        reajuste = 0.1;
        valor_reajuste = salario * reajuste;
        salario += valor_reajuste;
    }
    else if (salario <= 2000)
    {
        perc_reajuste = 7;
        reajuste = 0.07;
        valor_reajuste = salario * reajuste;
        salario += valor_reajuste;
    }
    else
    {
        perc_reajuste = 4;
        reajuste = 0.04;
        valor_reajuste = salario * reajuste;
        salario += valor_reajuste;
    }

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", valor_reajuste);
    printf("Em percentual: %d %%\n", perc_reajuste);

    return 0;
}