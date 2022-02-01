// URI 1019. Conversão de Tempo

#include <stdio.h>

int main()
{
    int horas, minutos, segundos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos - horas * 3600) / 60;
    segundos = segundos - horas * 3600 - minutos * 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}