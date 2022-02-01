// URI 2717. Tempo do Duende

#include <stdio.h>

int main()
{
    int A, B, N;

    scanf("%d%d%d", &N, &A, &B);

    (N >= A + B) ? printf("Farei hoje!\n") : printf("Deixa para amanha!\n");

    return 0;
}