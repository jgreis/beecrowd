// URI 1071. Soma de Impares Consecutivos

#include <stdio.h>

int main()
{
    int i, num1, num2, temp, soma;
    while (scanf("%d%d", &num1, &num2) == 2)
    {
        soma = 0;
        if (num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num1 % 2 != 0)
        {
            for (i = num1 + 2; i < num2; i++)
            {
                if (i % 2 != 0)
                    soma += i;
            }
        }
        else
        {
            for (i = num1 + 1; i < num2; i++)
            {
                if (i % 2 != 0)
                    soma += i;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}