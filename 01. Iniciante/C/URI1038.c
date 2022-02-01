// URI 1038. Lanche

#include <stdio.h>

int main()
{
    int cod, qtd;
    double total;

    scanf("%d %d", &cod, &qtd);

    switch (cod)
    {
    case 1:
        printf("Total: R$ %.2lf\n", total = qtd * 4.00);
        break;

    case 2:
        printf("Total: R$ %.2lf\n", total = qtd * 4.50);
        break;

    case 3:
        printf("Total: R$ %.2lf\n", total = qtd * 5.00);
        break;

    case 4:
        printf("Total: R$ %.2lf\n", total = qtd * 2.00);
        break;

    case 5:
        printf("Total: R$ %.2lf\n", total = qtd * 1.50);
        break;
    }

    return 0;
}