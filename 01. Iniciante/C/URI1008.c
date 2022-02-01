// URI 1008. Salário

#include <stdio.h>

int main()
{
    int idFunc, hrTrab;
    float vlrHora, salario;

    scanf("%d%d%f", &idFunc, &hrTrab, &vlrHora);

    salario = vlrHora * hrTrab;

    printf("NUMBER = %d\n", idFunc);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}