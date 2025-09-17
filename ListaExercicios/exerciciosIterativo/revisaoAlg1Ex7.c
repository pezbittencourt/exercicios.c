#include <stdio.h>

int main()
{
    int n, valor, temp, achou = 0;
    printf("Insira o valor: ");
    scanf("%d", &temp);

    valor = temp;
    while (valor > 0)
    {
        n = valor % 10;
        if (n == 3)
        {
            achou = 1;
            break;
        }
        valor = valor / 10;
    }

    if (achou)
        printf("O numero %d possui o digito 3", temp);
    else
        printf("O numero %d nao possui o digito 3", temp);

    return 0;
}
