// URI 1065. Pares entre Cinco Números

#include <stdio.h>

int main()
{
    int num1, num, i = 0;
    for (num1 = 1; num1 <= 5; num1++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            i++;
    }
    printf("%d valores pares\n", i);

    return 0;
}